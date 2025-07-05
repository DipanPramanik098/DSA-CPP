#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void printOneToN(int n){
    if(n<=0) return; //Base Case

    printOneToN(n-1);

    cout<<n<<" ";
 }

int main(){
    int n;
    cin>>n;

    printOneToN(n);
    return 0;
}