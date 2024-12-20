#include "question3.h"
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

bool wordBreakDP(const string &s, const vector<string> &wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    bool dp[s.length() + 1]; 
    fill(dp, dp + s.length() + 1, false); // Initialize the array to `false`
    dp[0] = true;

    for (int i = 1; i <= s.length(); i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end()) {
                dp[i] = true;
                break; // Break early if a valid segmentation is found
            }
        }
    }

    return dp[s.length()];
}
