#include "question2.h"
#include <limits.h>
#include <algorithm> // For std::max
#include <vector>

// Bottom-up DP function to maximize profit
long long int rodCutDP(int price[], int n) {
    std::vector<long long int> dp(n + 1, 0); // DP table

    for (int i = 1; i <= n; i++) {
        long long int maxProfit = INT_MIN;
        for (int j = 1; j <= i; j++) {
            maxProfit = std::max(maxProfit, price[j - 1] + dp[i - j]);
        }
        dp[i] = maxProfit;
    }

    return dp[n];
}
