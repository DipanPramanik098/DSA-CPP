#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void reverse(int arr[], int startIndex, int endIndex){
    if(startIndex >= endIndex) return;
    swap(arr[startIndex], arr[endIndex]);

    reverse(arr, startIndex+1, endIndex-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5; //n is size of the array
    reverse(arr,0, n-1);

    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   