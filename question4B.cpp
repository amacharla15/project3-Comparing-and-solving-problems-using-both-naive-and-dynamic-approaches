#include "question4.h"

bool canPartitionDP(const int nums[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) totalSum += nums[i];

    // If total sum is odd, partitioning into two equal subsets is not possible
    if (totalSum % 2 != 0) return false;

    int targetSum = totalSum / 2;
    bool dp[size + 1][targetSum + 1];

    // Initialize DP table
    for (int i = 0; i <= size; i++) dp[i][0] = true; // We can always form 0 sum
    for (int j = 1; j <= targetSum; j++) dp[0][j] = false; // No sum can be formed with 0 elements

    // Fill DP table
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (nums[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[size][targetSum];
}
