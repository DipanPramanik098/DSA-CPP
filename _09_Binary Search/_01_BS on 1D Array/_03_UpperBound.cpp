#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int ub(vector<int>&a, int x) {
    int s=0,e=a.size()-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid] == x) {
            ans = mid;
            s = mid + 1;
        }
        else if(a[mid < x]) s = mid + 1;
        else e = mid -1; 
    }
    return ans;
}

int main(){
    vector<int>a = {1,2,2,3};
    int x = 2;
    cout<<"LowerBound of "<<x<<" = "<<ub(a,x);

    return 0;
}