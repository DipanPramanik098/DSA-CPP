#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int searchInsert(vector<int>& nums, int target) {
    int s = 0;
    int e = nums.size()-1;
    int ans = nums.size();
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid] >= target){
            ans = mid;
            e = mid -1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}
int main(){
    // leetcode 35
    return 0;
}