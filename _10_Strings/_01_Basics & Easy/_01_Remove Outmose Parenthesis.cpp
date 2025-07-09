#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
string removeOuterParentheses(string s) {
    int open = 0, closed = 0;
    int index = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(') open++;
        if(s[i] == ')') closed++;
        if(open == closed){
            s[index] = '#';
            s[i] = '#';
            open = 0;
            closed = 0;
            index = i+1;
        }
    }
    string ans = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]!='#') ans+=s[i];
    }
    return ans;
}
int main(){
    string s = "(()())(())";
    string ans = removeOuterParentheses(s);
    cout << ans << endl; // Output: ()()()
    return 0;
}