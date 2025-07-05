#include <bits/stdc++.h>
#include<iostream>
#include <string>  // For using C++ strings
using namespace std;
//~: Dipan Pramanik :~

int main() {
    // ---------- Arrays ----------
    // An array is a collection of elements of the same type stored in contiguous memory locations.

    int numbers[5] = {10, 20, 30, 40, 50};  // Declaring and initializing an integer array

    cout << "Array Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    cout << endl;

    // ---------- Strings ----------
    // In C++, there are two types of strings:
    // 1. C-style strings (character arrays)
    // 2. C++ strings (using the string class from <string>)

    // C-style string
    char cString[] = "Hello";

    // C++ string
    string cppString = "World";

    cout << "C-style String: " << cString << endl;
    cout << "C++ String: " << cppString << endl;

    // String concatenation using C++ string
    string fullGreeting = cppString + " says " + cString;
    cout << "Concatenated String: " << fullGreeting << endl;

    // Accessing string characters
    cout << "First character of C++ string: " << cppString[0] << endl;

    return 0;
}
