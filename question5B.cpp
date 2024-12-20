#include "question5.h"
#include <vector>
#include <climits>

using namespace std;

// DP solution to find the minimum cuts
int minCutsDP(const string &s) {
    int n = s.length();
    vector<int> dp(n, INT_MAX);       // dp[i] = minimum cuts needed for substring s[0:i]
    vector<vector<bool>> palin(n, vector<bool>(n, false)); // palin[i][j] = true if s[i:j] is a palindrome

    // Precompute palindrome information
    for (int len = 1; len <= n; len++) {
        for (int start = 0; start <= n - len; start++) {
            int end = start + len - 1;
            palin[start][end] = (s[start] == s[end]) && (len <= 2 || palin[start + 1][end - 1]);
        }
    }

    // Compute minimum cuts using the precomputed palindrome table
    for (int end = 0; end < n; end++) {
        if (palin[0][end]) {
            dp[end] = 0; // No cut needed if s[0:end] is a palindrome
        } else {
            for (int cut = 0; cut < end; cut++) {
                if (palin[cut + 1][end]) {
                    dp[end] = min(dp[end], dp[cut] + 1);
                }
            }
        }
    }

    return dp[n - 1];
}
