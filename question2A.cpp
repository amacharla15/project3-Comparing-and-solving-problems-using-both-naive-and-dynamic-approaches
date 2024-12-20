#include "question2.h"
#include <limits.h>
#include <algorithm> // For std::max

// Recursive function to maximize profit
long long int rodCutRecursive(int price[], int n, int &callCount) {
    callCount++; // Tracing number of recursive calls

    if (n == 0) return 0; // Base case: No rod left to cut

    long long int maxProfit = INT_MIN;

    // Trying all possible cuts
    for (int i = 1; i <= n; i++) {
        maxProfit = std::max(maxProfit, price[i - 1] + rodCutRecursive(price, n - i, callCount));
    }

    return maxProfit;
}
