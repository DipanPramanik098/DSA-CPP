#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int main() {
    // ---------- For Loop Basics ----------
    // A for loop has three parts:
    // for(initialization; condition; update)
    // It repeats the block as long as the condition is true.

    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    // ---------- Reverse Counting ----------
    cout << "Counting down from 5 to 1:" << endl;
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl << endl;

    // ---------- For Loop with Arrays ----------
    int nums[] = {2, 4, 6, 8, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Printing array elements using for loop:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "nums[" << i << "] = " << nums[i] << endl;
    }

    return 0;
}
