#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// Note: Brute Force
int countDigit1(int n){
    int x=n;
    int count =0;
    while(x){
        count++;
        x/=10;
    }
    return count;
}

// Note: Optimal (Explaination in Notes)
int countDigit2(int n){
    int x=n;
    int count = (int)(log10(n))+1;
    return count;
} 
int main(){
    int N = 1234;

    cout<< countDigit1(N)<<endl;

    cout<<countDigit2(N);
    return 0;
}