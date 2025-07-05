#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
// Function to find the first occurrence of target
int firstOccurrence(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;      // possible answer found
            high = mid - 1;    // look on left side
        } else if (arr[mid] < target) {
            low = mid + 1;     // look right
        } else {
            high = mid - 1;    // look left
        }
    }
    return result;
}

// Function to find the last occurrence of target
int lastOccurrence(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;      // possible answer found
            low = mid + 1;     // look on right side
        } else if (arr[mid] < target) {
            low = mid + 1;     // look right
        } else {
            high = mid - 1;    // look left
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};  // sorted array
    int target = 2;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    if (first == -1)
        cout << "Element not found in array." << endl;
    else {
        cout << "First Occurrence: " << first << endl;
        cout << "Last Occurrence: " << last << endl;
    }

    return 0;
}