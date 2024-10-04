# C++ Task: Memory Addresses

## Task Description

This repository contains a simple C++ program that demonstrates how to determine and print the memory addresses of two variables with different data types without using any standard library functions.

### Key Concepts:
- **Pointer basics:** Accessing the memory address of variables using the `&` operator.
- **Template Function:** To handle variables of different data types.
- **Memory management** in C++.

## Function Breakdown:

- **`memoryAddresses(T1 var1, T2 var2)`**:
  - Takes two variables as parameters (with different data types).
  - Prints the memory addresses of both variables using the `&` operator.
  
### Example Usage:

In the `main()` function, two example variables (an `int` and a `double`) are defined, and their memory addresses are printed using the `memoryAddresses()` function.

```cpp
int a = 10;        // Example variable 1 (int)
double b = 20.5;   // Example variable 2 (double)

memoryAddresses(a, b);
