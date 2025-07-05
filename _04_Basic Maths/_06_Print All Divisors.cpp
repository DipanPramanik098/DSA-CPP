#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// Brute Force
int* printDivisors(int n, int &size) {
    int *divisors = new int[n]; 
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisors[count++] = i; 
        }
    }
    size = count; 
    return divisors; 
}

// Optimal

vector<int> findDivisors(int n) {
    vector<int> divisors; 
    for (int i = 1; i <= sqrt(n); ++i) { 
        if (n % i == 0) { 
            divisors.push_back(i); 

            if (i != n / i) {
                divisors.push_back(n / i); 
            }
        }
    }
    
    return divisors; 
}


int main() {
    int number = 19;
    int size;
    int *divisors = printDivisors(number, size);

    cout << "Divisors of " << number << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << std::endl;

    delete[] divisors;


    cout<<"=========================="<<endl;
    vector<int> divisors1 = findDivisors(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors1) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}