#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int bs(vector<int>&a, int k){
    int start=0, end = a.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(a[mid] == k) return mid;
        else if(a[mid] < k) start = mid+1;
        else end = mid - 1;
    }
    return -1;
}
int main(){
    vector<int>arr = {-1,0,3,5,9,12};
    int target = 9;

    cout<<bs(arr,target);
    return 0;
}