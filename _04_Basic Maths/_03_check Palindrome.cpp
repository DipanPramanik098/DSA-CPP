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

bool isPalindrome(int n){
    int x=n;
    int rev = reverse(x);
    if(rev==n) return 1;
    return 0;
}
int main(){
    cout<<isPalindrome(1111)<<endl;
    cout<<isPalindrome(1121)<<endl;
    return 0;
}