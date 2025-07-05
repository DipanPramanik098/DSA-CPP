#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void printNtoOne(int n){
    if(n <= 0) return;
    cout<<n<<" ";
    printNtoOne(n-1);
 }

int main(){
    int n;
    cin>>n;

    printNtoOne(n);
    return 0;
}