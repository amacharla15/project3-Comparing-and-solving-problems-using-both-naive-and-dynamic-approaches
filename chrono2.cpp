#include <iostream>
#include <chrono>
#include "question2.h"

using namespace std;
using namespace std::chrono;

int main() {
    // Example inputs
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30, 35, 40, 50, 55, 60};
    int n = sizeof(price) / sizeof(price[0]);

    cout << "Rod length: " << n << endl;
    cout << "Choose the implementation to run:\n";
    cout << "1. Recursive\n";
    cout << "2. Dynamic Programming\n";
    int choice;
    cin >> choice;

    auto start = high_resolution_clock::now();

    if (choice == 1) {
        int callCount = 0;
        long long int result = rodCutRecursive(price, n, callCount);
        auto end = high_resolution_clock::now();
        cout << "Maximum Profit (Recursive): " << result << endl;
        cout << "Number of Recursive Calls: " << callCount << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else if (choice == 2) {
        long long int result = rodCutDP(price, n);
        auto end = high_resolution_clock::now();
        cout << "Maximum Profit (Dynamic Programming): " << result << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
