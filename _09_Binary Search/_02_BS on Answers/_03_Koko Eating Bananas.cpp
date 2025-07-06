#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int minEatingSpeed(vector<int>& piles, int h) {
    int start=0,end =0, ans;
    long long sum = 0;
    int n = piles.size();
    // find start and end
    for(int i = 0; i<n;i++){
        sum+=piles[i];
        end= max(end,piles[i]);
    }
    start = sum / h;
    // check Zero division error
    if(!start) start = 1;
    // Binary Search Approach
    while(start <= end){
        int mid = start + (end - start)/2;
        // koko eating mid banana per hour
        int total_time = 0;
        for(int i = 0; i<n ; i++){
            total_time+=piles[i]/mid;
            if(piles[i]%mid) total_time++;
        }
        if(total_time>h) start = mid + 1;
        else{
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
} 
int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minEatingSpeed(v,h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}