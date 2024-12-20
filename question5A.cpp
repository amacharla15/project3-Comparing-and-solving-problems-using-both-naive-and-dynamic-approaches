#include "question5.h"

using namespace std;

// Check if the entire string is a palindrome
bool isPalindromeString(const string &s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

// Recursive function to find the minimum cuts
int minCutsHelper(const string &s, int start, int n) {
    if (start == n || isPalindrome(s, start, n - 1)) return 0; // Base case

    int minCuts = n - start - 1; // Maximum possible cuts

    for (int end = start; end < n; end++) {
        if (isPalindrome(s, start, end)) {
            minCuts = min(minCuts, 1 + minCutsHelper(s, end + 1, n));
        }
    }

    return minCuts;
}

// Naive recursive solution
int minCutsRecursive(const string &s) {
    return minCutsHelper(s, 0, s.length());
}
