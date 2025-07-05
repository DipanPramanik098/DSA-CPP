#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

//brute Force 
bool checkPrime(int n){ 
   int cnt = 0;
   for(int i = 1; i<=n; i++){ 
       if(n%i ==0){ 
           cnt = cnt+1;
       }
   }
   return cnt==2;
}

// Optimal
bool checkPrime1(int n){ 
    int cnt = 0;

    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ 

            cnt = cnt + 1;

            if(n / i != i){
                cnt = cnt + 1;
            }
        }
    }

    return cnt==2;
}
int main() {
   int n = 86;
   bool isPrime = checkPrime(n);
   if(isPrime){
       cout << n << " is a prime number." << endl;
   } else {
       cout << n << " is not a prime number." << endl;
   }

   bool isPrime1 = checkPrime1(n);
   if(isPrime1){
       cout << n << " is a prime number." << endl;
   } else {
       cout << n << " is not a prime number." << endl;
   }

   return 0;
}