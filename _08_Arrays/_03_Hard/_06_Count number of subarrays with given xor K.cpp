#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size();
    int xr = 0, cnt = 0;
    unordered_map<int, int> mpp;

    mpp[0] = 1; // To handle the case when prefix XOR itself is equal to k

    for (int i = 0; i < n; i++) {
        xr ^= a[i]; // Calculate prefix XOR

        int x = xr ^ k; // Find the required prefix XOR

        if (mpp.find(x) != mpp.end()) {
            cnt += mpp[x]; // Add count of previous prefix XORs that match
        }

        mpp[xr]++; // Store the current prefix XOR
    }

    return cnt;
}

int main() {
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: " << ans << "\n";
    return 0;
}