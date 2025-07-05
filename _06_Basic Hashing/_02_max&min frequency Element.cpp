#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void frequency(int a[], int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int maxe=0,mine,maxf=0,minf=INT_MAX;
    for(auto it: mp){
        int ele  = it.first;
        int count = it.second;
        if(count<minf){
            minf = count;
            mine = ele;
        }
        if(count>maxf){
            maxf=count;
            maxe=ele;
        }
    }
    cout<<"Max " <<maxe;
    cout<<"Min " <<mine;
}
int main(){
    int arr[]={1,2,1,1,1,3,2,0,1,0,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    frequency(arr,n);
    return 0;
}