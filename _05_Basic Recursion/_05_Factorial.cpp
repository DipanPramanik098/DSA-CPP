#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int fact(int n){
    if(n<=0) return 1;

    return n* fact(n-1);
}
int main(){
    int n;
    cin>>n;

    cout<<fact(n);
    return 0;
}