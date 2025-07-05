#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    

int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int n = arr.size();
    map<int, int> mpp;  //  Specify key and value types for the map
    int preSum = 0, cnt = 0;

    mpp[0] = 1;  // Prefix sum 0 occurs once initially

    for (int i = 0; i < n; i++) {
        preSum += arr[i];  // Update prefix sum

        int remove = preSum - k;

        // If remove exists in map, it means there's a subarray ending here with sum = k
        if (mpp.find(remove) != mpp.end()) {
            cnt += mpp[remove];
        }

        mpp[preSum] += 1;  // Update the frequency of the current prefix sum
    }

    return cnt;
}

int main() {
    vector<int> arr = {3, 1, 2, 4};  //  Specify the type inside angle brackets
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}