#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int left = 0, right = n - 1;

        while (left <= right) {
            int midCol = left + (right - left) / 2;

            // Find the row index with the maximum element in midCol
            int maxRow = 0;
            for (int i = 0; i < m; ++i) {
                if (mat[i][midCol] > mat[maxRow][midCol]) {
                    maxRow = i;
                }
            }

            int midVal = mat[maxRow][midCol];
            int leftVal = (midCol - 1 >= 0) ? mat[maxRow][midCol - 1] : -1;
            int rightVal = (midCol + 1 < n) ? mat[maxRow][midCol + 1] : -1;

            // Check if it's a peak
            if (midVal > leftVal && midVal > rightVal) {
                return {maxRow, midCol};
            } else if (rightVal > midVal) {
                left = midCol + 1;
            } else {
                right = midCol - 1;
            }
        }

        return {-1, -1}; // fallback (not expected to be used)
    }
};

// 🔽 Example usage in main
int main() {
    Solution sol;

    vector<vector<int>> mat = {
        {1, 4},
        {3, 2}
    };

    vector<int> peak = sol.findPeakGrid(mat);

    cout << "Peak element found at position: [" << peak[0] << ", " << peak[1] << "]" << endl;

    return 0;
}
