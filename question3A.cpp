#include "question3.h"
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

// Helper function for recursive solution
bool wordBreakHelper(const string &s, const unordered_set<string> &dict, int start) {
    if (start == s.length()) return true;

    for (int end = start + 1; end <= s.length(); end++) {
        string word = s.substr(start, end - start);
        if (dict.find(word) != dict.end() && wordBreakHelper(s, dict, end)) {
            return true;
        }
    }
    return false;
}

// Naive recursive solution
bool wordBreakRecursive(const string &s, const vector<string> &wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    return wordBreakHelper(s, dict, 0);
}
