#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// Function with O(1) Time and Space Complexity
void constantTimeExample(int n) {
    // This runs only once, no matter the value of n
    cout << "O(1) - Constant Time: n = " << n << endl;
}

// Function with O(n) Time and O(1) Space Complexity
void linearTimeExample(int n) {
    cout << "O(n) - Linear Time:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " "; // Runs n times
    }
    cout << endl;
}

// Function with O(n^2) Time and O(1) Space Complexity
void quadraticTimeExample(int n) {
    cout << "O(n^2) - Quadratic Time:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "(" << i << "," << j << ") "; // Runs n*n times
        }
        cout << endl;
    }
}

// Function with O(n) Time and O(n) Space Complexity
void linearSpaceExample(int n) {
    cout << "O(n) - Linear Space:" << endl;
    int* arr = new int[n]; // Allocating space for n elements

    for (int i = 0; i < n; i++) {
        arr[i] = i * i; // Filling the array
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Freeing up memory
}

int main() {
    int n = 4;

    constantTimeExample(n);
    linearTimeExample(n);
    quadraticTimeExample(n);
    linearSpaceExample(n);

    return 0;
}
