#include <bits/stdc++.h>
#include<iostream>
//~: Dipan Pramanik :~
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

int main() {
    // 1. VECTOR - Dynamic Array
    vector<int> vec = {5, 3, 8, 1};
    vec.push_back(10);       // Add element at end
    vec.pop_back();          // Remove last element
    vec.insert(vec.begin(), 0); // Insert at beginning
    vec.erase(vec.begin());  // Erase first element
    vec.clear();             // Remove all elements
    vec = {5, 3, 8, 1};
    sort(vec.begin(), vec.end()); // Sort
    reverse(vec.begin(), vec.end()); // Reverse
    cout << "Vector: "; for (int v : vec) cout << v << " "; cout << endl;

    // 2. LIST - Doubly Linked List
    list<int> lst = {1, 2, 3};
    lst.push_front(0);       // Insert at front
    lst.push_back(4);        // Insert at end
    lst.pop_front();         // Remove front
    lst.pop_back();          // Remove end
    lst.reverse();           // Reverse list
    cout << "List: "; for (int l : lst) cout << l << " "; cout << endl;

    // 3. DEQUE - Double Ended Queue
    deque<int> dq = {2, 3};
    dq.push_front(1);        // Insert at front
    dq.push_back(4);         // Insert at back
    dq.pop_front();          // Remove front
    dq.pop_back();           // Remove back
    cout << "Deque: "; for (int d : dq) cout << d << " "; cout << endl;

    // 4. SET - Unique Sorted Elements
    set<int> st = {4, 1, 3};
    st.insert(2);            // Insert element
    st.erase(1);             // Erase element
    cout << "Set: "; for (int s : st) cout << s << " "; cout << endl;

    // 5. MAP - Key-Value Pairs
    map<string, int> mp;
    mp["apple"] = 3;         // Insert
    mp["banana"] = 5;
    mp.erase("apple");       // Remove key
    cout << "Map: "; for (auto p : mp) cout << "{" << p.first << ":" << p.second << "} "; cout << endl;

    // 6. UNORDERED SET
    unordered_set<int> ust = {3, 1, 4};
    ust.insert(2);           // Insert
    ust.erase(3);            // Erase
    cout << "Unordered Set: "; for (int us : ust) cout << us << " "; cout << endl;

    // 7. UNORDERED MAP
    unordered_map<string, int> ump;
    ump["car"] = 10;
    ump["bike"] = 2;
    ump.erase("car");        // Erase key
    cout << "Unordered Map: "; for (auto p : ump) cout << "{" << p.first << ":" << p.second << "} "; cout << endl;

    // 8. ITERATORS
    cout << "Vector with Iterator: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) cout << *it << " "; cout << endl;

    // 9. ALGORITHMS
    cout << "Count of 3 in vector: " << count(vec.begin(), vec.end(), 3) << endl;
    cout << "Finding 8: " << (find(vec.begin(), vec.end(), 8) != vec.end() ? "Found" : "Not Found") << endl;
    cout << "Binary Search 10: " << (binary_search(vec.begin(), vec.end(), 10) ? "Found" : "Not Found") << endl;
    cout << "Lower bound of 3: " << *lower_bound(vec.begin(), vec.end(), 3) << endl;
    cout << "Accumulate (Sum): " << accumulate(vec.begin(), vec.end(), 0) << endl;

    // 10. FUNCTION OBJECT (Functor)
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Vector Descending (Functor): "; for (int v : vec) cout << v << " "; cout << endl;

    return 0;
}