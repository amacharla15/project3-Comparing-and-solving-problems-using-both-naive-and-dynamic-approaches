#ifndef QUESTION5_H
#define QUESTION5_H

#include <string>
#include <algorithm>

using namespace std;

// Inline function to check if a substring is a palindrome
inline bool isPalindrome(const string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

bool isPalindromeString(const string &s);
int minCutsRecursive(const string &s);
int minCutsDP(const string &s);

#endif
