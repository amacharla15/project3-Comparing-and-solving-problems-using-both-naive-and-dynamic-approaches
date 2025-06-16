# README

## **Project Overview**
This project contains solutions to various algorithmic problems implemented in C++ using different approaches, including naive recursion and dynamic programming. Each problem focuses on a unique computational challenge, demonstrating efficient algorithm design and problem-solving techniques.

---

## **Problems Solved**

### **1. Matrix Chain Multiplication Problem**
- **Objective**: Determine the most efficient way to multiply a series of matrices to minimize scalar multiplications.
- **Files**:
  - `question1A.cpp`: Naive recursive implementation.
  - `question1B.cpp`: Dynamic programming implementation.
  - `question1.h`: Function declarations.
  - `chrono.cpp`: Driver code to test and compare implementations.
- **Compilation**:
  ```bash
  g++ chrono.cpp question1A.cpp question1B.cpp -o question1
  ```

---

### **2. Rod Cutting Problem**
- **Objective**: Maximize profit by cutting a rod of length `n` into smaller lengths, given a price table for each length.
- **Files**:
  - `question2A.cpp`: Naive recursive implementation.
  - `question2B.cpp`: Dynamic programming implementation.
  - `question2.h`: Function declarations.
  - `chrono.cpp`: Driver code to test and compare implementations.
- **Compilation**:
  ```bash
  g++ chrono.cpp question2A.cpp question2B.cpp -o question2
  ```

---

### **3. Word Break Problem**
- **Objective**: Determine if a string can be segmented into one or more words found in a provided dictionary.
- **Files**:
  - `question3A.cpp`: Naive recursive implementation.
  - `question3B.cpp`: Dynamic programming implementation.
  - `question3.h`: Function declarations.
  - `chrono.cpp`: Driver code to test and compare implementations.
- **Compilation**:
  ```bash
  g++ chrono.cpp question3A.cpp question3B.cpp -o question3
  ```

---

### **4. Partition Problem**
- **Objective**: Determine whether a given set of integers can be partitioned into two subsets such that the sum of elements in both subsets is equal.
- **Files**:
  - `question4A.cpp`: Naive recursive implementation.
  - `question4B.cpp`: Dynamic programming implementation.
  - `question4.h`: Function declarations.
  - `chrono.cpp`: Driver code to test and compare implementations.
- **Compilation**:
  ```bash
  g++ chrono.cpp question4A.cpp question4B.cpp -o question4
  ```

---

### **5. Palindrome Partitioning Problem**
- **Objective**: Find the minimum number of cuts needed to partition a string such that every substring is a palindrome.
- **Files**:
  - `question5A.cpp`: Naive recursive implementation.
  - `question5B.cpp`: Dynamic programming implementation.
  - `question5.h`: Function declarations.
  - `chrono5.cpp`: Driver code to test and compare implementations.
- **Compilation**:
  ```bash
  g++ chrono5.cpp question5A.cpp question5B.cpp -o question5
  ```

---

## **Execution Instructions**
1. Compile the desired problem using the appropriate `g++` command.
2. Run the generated executable:
   ```bash
   ./<executable_name>
   ```
3. Follow the on-screen prompts to select the implementation (Recursive or Dynamic Programming).

---

## **Project Features**
- **Chrono Library**: Used for measuring the execution time of both recursive and dynamic programming implementations.
- **Header Files**: Used to organize function declarations for modularity and reuse.
- **Dynamic Programming Optimization**: Efficiently solves problems by avoiding redundant computations.
- **Naive Recursive Implementations**: Demonstrates brute-force approaches for comparison.

---

## **Future Improvements**
- Extend support for larger input sizes with further optimizations.
- Add additional testing and validation cases for edge inputs.
- Include more advanced problems and solutions for extended learning.

---

## **Contact**
For questions or suggestions, please reach out to [akshithkumar37@gmail.com].
