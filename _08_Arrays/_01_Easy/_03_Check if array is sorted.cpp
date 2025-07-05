#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) // For non-decreasing order
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 12, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (isSorted(arr, n))
        cout << "Array is sorted.";
    else
        cout << "Array is not sorted.";
    
    return 0;
}