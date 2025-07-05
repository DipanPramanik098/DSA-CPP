#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

vector<int> preprocess(vector<int>& array) {
    int max_value = *max_element(array.begin(), array.end());
    vector<int> hashArray(max_value + 1, 0);

    for (int number : array) {
        hashArray[number]++;
    }

    return hashArray;
}

// Query function (no const)
int query(vector<int>& hashArray, int number) {
    if (number >= 0 && number < hashArray.size()) {
        return hashArray[number];
    }
    return 0; // number is out of range
}

// Example usage
int main() {
    vector<int> arr = {3, 5, 3, 2, 5, 5};
    vector<int> hashArray = preprocess(arr);

    cout << "Frequency of 5: " << query(hashArray, 5) << endl;
    cout << "Frequency of 2: " << query(hashArray, 2) << endl;
    cout << "Frequency of 10: " << query(hashArray, 10) << endl;

    return 0;
}
