#include <bits/stdc++.h>
using namespace std;

//~: Dipan Pramanik :~

long long kadane(int arr[], int n) {
    long long maxSoFar = LONG_MIN;
    long long maxEndingHere = 0;

    for (int i = 0; i < n; i++) {
        maxEndingHere += arr[i];

        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;

        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }

    return maxSoFar;
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is: " << kadane(arr, n) << endl;

    return 0;
}
