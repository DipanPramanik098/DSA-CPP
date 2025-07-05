#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// Manual reverse function
void manualReverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Left rotate by k positions using reversal algorithm
void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k %= n; // In case k > n
    manualReverse(arr, 0, k - 1);
    manualReverse(arr, k, n - 1);
    manualReverse(arr, 0, n - 1);
}

// Right rotate by k positions using reversal algorithm
void rightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k %= n; // In case k > n
    manualReverse(arr, 0, n - k - 1);
    manualReverse(arr, n-k, n - 1);
    manualReverse(arr, 0, n - 1);
}

int main() {
    int n, k, direction;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter value of k (rotation count): ";
    cin >> k;

    cout << "Enter direction (1 for Left, 2 for Right): ";
    cin >> direction;

    if (direction == 1) {
        leftRotate(arr, k);
        cout << "Array after left rotation: ";
    } else if (direction == 2) {
        rightRotate(arr, k);
        cout << "Array after right rotation: ";
    } else {
        cout << "Invalid direction!\n";
        return 0;
    }

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
