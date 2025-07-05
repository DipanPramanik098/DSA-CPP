#include <bits/stdc++.h>
using namespace std;
//~: Dipan Pramanik :~

void pascal(int n){
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++){
        vector<int> row(i + 1);
        ans.push_back(row);
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i) {
                ans[i][j] = 1;
            } else {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    }
    // Printing
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pascal(n);
    return 0;
}
