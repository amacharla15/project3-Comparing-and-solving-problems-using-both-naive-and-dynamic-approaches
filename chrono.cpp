#include <iostream>
#include <chrono>
#include "Question1.h"

using namespace std;
using namespace std::chrono;

int callCount = 0;

int main() {
    long long int p[] = {30, 35, 15, 5, 10, 20, 25, 60, 70, 80, 90, 20, 30}; // Change input as needed
    int n = sizeof(p) / sizeof(p[0]);

    cout << "Choose the implementation to run:\n";
    cout << "1. Recursive\n";
    cout << "2. Dynamic Programming\n";
    int choice;
    cin >> choice;

    auto start = high_resolution_clock::now();

    if (choice == 1) {
        long long int result = matrixChainRecursive(p, 1, n - 1);
        auto end = high_resolution_clock::now();
        cout << "Minimum multiplications (Recursive): " << result << endl;
        cout << "Number of recursive calls: " << callCount << endl;
        cout << "Execution time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else if (choice == 2) {
        auto result = matrixChainDP(p, n);
        auto end = high_resolution_clock::now();
        cout << "Minimum multiplications (Dynamic Programming): " << result << endl;
        cout << "Execution time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
