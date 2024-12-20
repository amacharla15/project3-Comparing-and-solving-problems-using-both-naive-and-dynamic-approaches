#include <iostream>
#include <chrono>
#include "question4.h"

using namespace std;
using namespace chrono;

int main() {
    int nums[] = {2, 3, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Input set: [ ";
    for (int i = 0; i < size; i++) cout << nums[i] << " ";
    cout << "]" << endl;

    cout << "Choose the implementation to run:\n";
    cout << "1. Recursive\n";
    cout << "2. Dynamic Programming\n";
    int choice;
    cin >> choice;

    auto start = high_resolution_clock::now();

    if (choice == 1) {
        bool result = canPartitionRecursive(nums, size);
        auto end = high_resolution_clock::now();
        cout << "Can the set be partitioned (Recursive)? " << (result ? "True" : "False") << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else if (choice == 2) {
        bool result = canPartitionDP(nums, size);
        auto end = high_resolution_clock::now();
        cout << "Can the set be partitioned (Dynamic Programming)? " << (result ? "True" : "False") << endl;
        cout << "Execution Time: " << duration_cast<microseconds>(end - start).count() << "µs" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
