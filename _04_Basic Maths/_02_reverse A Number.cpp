#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int reverse(int n){
    int rev=0;
    int x=n;
    while(x>0){
        int ld = x%10;
        rev= rev*10 + ld;
        x/=10;
    }
    return rev;
}
int main(){
    int N = 1234;

    cout<<"Reverse of "<<N <<" is "<<reverse(N);
    return 0;
}