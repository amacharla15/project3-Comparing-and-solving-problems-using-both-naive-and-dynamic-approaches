#include <iostream>
#include <chrono>
#include "question3.h"

using namespace std;
using namespace chrono;

int main() {
    // Example inputs
    string s = "catsandog";
    vector<string> wordDict = {"cats", "dog" , "sand", "and", "cat"};

    cout << "String: " << s << endl;
    cout << "Dictionary: [ ";
    for (const auto &word : wordDict) cout << word << " ";
    cout << "]" << endl;

    cout << "Choose the implementation to run:\n";
    cout << "1. Recursive\n";
    cout << "2. Dynamic Programming\n";
    int choice;
    cin >> choice;

    auto start = high_resolution_clock::now();

    if (choice == 1) {
        bool result = wordBreakRecursive(s, wordDict);
        auto end = high_resolution_clock::now();
        cout << "Can the string be segmented (Recursive)? " << (result ? "True" : "False") << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else if (choice == 2) {
        bool result = wordBreakDP(s, wordDict);
        auto end = high_resolution_clock::now();
        cout << "Can the string be segmented (Dynamic Programming)? " << (result ? "True" : "False") << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
