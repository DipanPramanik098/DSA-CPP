#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// ---------- Function Declaration ----------
// Syntax: return_type function_name(parameters);

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to print a message
void greet() {
    cout << "Hello from the greet() function!" << endl;
}

// Function to find the maximum of two numbers
int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    // Calling a function with return value
    int result = add(5, 7);
    cout << "Sum of 5 and 7 is: " << result << endl;

    // Calling a void function
    greet();

    // Calling a function that returns maximum
    int a = 10, b = 20;
    int maximum = max(a, b);
    cout << "Maximum of " << a << " and " << b << " is: " << maximum << endl;

    return 0;
}
