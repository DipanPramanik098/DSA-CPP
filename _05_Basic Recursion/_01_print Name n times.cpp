#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void printName(int N){
    if(N <= 0) return;
    cout<<"Dipan Pramanik"<<endl;
    printName(N-1);
}
int main(){
    int N;
    cin>>N;

    printName(N);
    return 0;
}