#include <iostream>
#include <chrono>
#include "question5.h"

using namespace std;
using namespace chrono;

int main() {
    string s = "racecar";

    cout << "Input string: " << s << endl;

    // Check if the input string is a palindrome
    if (isPalindromeString(s)) {
        cout << "The string is already a palindrome. No cuts needed." << endl;
        return 0;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    cout << "Choose the implementation to run:\n";
    cout << "1. Recursive\n";
    cout << "2. Dynamic Programming\n";
    int choice;
    cin >> choice;

    auto start = high_resolution_clock::now();

    if (choice == 1) {
        int result = minCutsRecursive(s);
        auto end = high_resolution_clock::now();
        cout << "Minimum cuts (Recursive): " << result << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else if (choice == 2) {
        int result = minCutsDP(s);
        auto end = high_resolution_clock::now();
        cout << "Minimum cuts (Dynamic Programming): " << result << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
