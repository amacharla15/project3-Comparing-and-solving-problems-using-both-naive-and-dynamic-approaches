#include "Question1.h"
#include <algorithm> // For std::min
#include <limits.h>
using namespace std;

// Function to calculate the minimum cost of multiplying matrices
long long int matrixChainRecursive(long long int p[], int i, int j) {
    if (i == j) return 0; // Base case: single matrix

    long long int minCost = LLONG_MAX;

    // Trying every possible split
    for (int k = i; k < j; k++) {
        long long int cost = matrixChainRecursive(p, i, k)
                           + matrixChainRecursive(p, k + 1, j)
                           + p[i - 1] * p[k] * p[j];
        minCost = min(minCost, cost); // Using std::min
    }
    return minCost;
}
