#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

bool isArmstrong(int num) {
    int k = to_string(num).length();   // Count digits
    int sum = 0;
    int n = num;
    while(n > 0){
        int ld = n % 10;               // Get last digit
        sum += power(ld, k);             // Add digit^k
        n = n / 10;
    }
    return sum == num;
}


int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
                            
                        