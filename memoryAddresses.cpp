#include <iostream>
using namespace std;

// Function to determine and print memory addresses
template<typename T1, typename T2>
void memoryAddresses(T1 var1, T2 var2) {
    // Printing memory addresses of the two variables
    cout << "Memory address of the first variable: " << &var1 << endl;
    cout << "Memory address of the second variable: " << &var2 << endl;
}

int main() {
    int a = 10;         // Example variable 1
    double b = 20.5;    // Example variable 2

    // Call the function to print memory addresses
    memoryAddresses(a, b);

    return 0;
}
