#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int age = 18;

    if(age>=18){
        cout<<"Adult"<<endl;
    }else if(age<18 && age>=14) cout<<"Teen age";
    else{
        cout<<"Child";
    }
    return 0;
}