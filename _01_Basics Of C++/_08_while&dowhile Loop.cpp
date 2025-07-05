#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int main() {
    // ---------- WHILE LOOP ----------
    // Syntax:
    // while (condition) {
    //     // code
    // }
    // It checks the condition before executing the loop body.

    int count = 1;

    cout << "Using while loop (counting from 1 to 5):" << endl;
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl << endl;

    // ---------- DO-WHILE LOOP ----------
    // Syntax:
    // do {
    //     // code
    // } while (condition);
    // It executes the loop body at least once, even if the condition is false.

    int num = 6;

    cout << "Using do-while loop (starting from 6, condition is num <= 5):" << endl;
    do {
        cout << "This line is printed even though num > 5 (num = " << num << ")" << endl;
    } while (num <= 5);

    // Now a do-while loop that runs multiple times
    int x = 1;
    cout << "\nDo-while loop (counting from 1 to 5):" << endl;
    do {
        cout << x << " ";
        x++;
    } while (x <= 5);

    return 0;
}
