#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// Brute Force
int gcd1(int n1 , int n2){
    int  gcd=1;
    for(int i=1;i<=min(n1,n2); i++){
        if(n1 %i == 0 && n2%i==0) {
            gcd =i;
        }
    }
    return gcd;
}
// Better Approach
int gcd2(int a, int b){
    for(int i=min(a,b); i>-1; i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
// Euclidean Algo
int gcd3(int a,int b){
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}
int main(){
    int n1 =12; int n2 =9;

    cout<<gcd1(n1,n2)<<endl;
    cout<<gcd2(n1,n2)<<endl;
    cout<<gcd3(n1,n2)<<endl;
    return 0;
}