#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
bool isPalindrome(string s, int si, int ei){
    if(si >= ei) return true;
    if(s[si] != s[ei]) return false;
    return isPalindrome(s, si + 1, ei - 1);
}

int main(){
    string s;
    cin >> s;

    cout << (isPalindrome(s, 0, s.length() - 1) ? "Palindrome" : "Not Palindrome");
    return 0;
}