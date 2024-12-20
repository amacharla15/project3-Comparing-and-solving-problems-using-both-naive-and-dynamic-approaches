#include "question4.h"

// Helper function for recursion
bool canPartitionHelper(const int nums[], int n, int targetSum) {
    if (targetSum == 0) return true; // Base case: Subset with target sum found
    if (n == 0 || targetSum < 0) return false; // No elements left or target becomes negative

    // Include or exclude the current element
    return canPartitionHelper(nums, n - 1, targetSum - nums[n - 1]) ||
           canPartitionHelper(nums, n - 1, targetSum);
}

// Naive recursive solution
bool canPartitionRecursive(const int nums[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) totalSum += nums[i];

    // If total sum is odd, partitioning into two equal subsets is not possible
    if (totalSum % 2 != 0) return false;

    return canPartitionHelper(nums, size, totalSum / 2);
}
