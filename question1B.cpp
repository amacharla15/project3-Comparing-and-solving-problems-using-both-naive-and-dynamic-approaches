#include "Question1.h"
#include <algorithm> // For std::min
#include <limits.h>
using namespace std;

// Function to calculate the minimum cost using bottom-up DP
long long int matrixChainDP(long long int p[], int n) {
    long long int dp[n][n] = {0}; // Table to store results of subproblems

    // dp[i][j] = Minimum number of multiplications needed to compute
    //            the matrix chain from Ai to Aj

    for (int len = 2; len < n; len++) { // Chain length
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            dp[i][j] = LLONG_MAX;

            for (int k = i; k < j; k++) {
                long long int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                dp[i][j] = min(dp[i][j], cost); // Using std::min
            }
        }
    }

    return dp[1][n - 1];
}
