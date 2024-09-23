//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void makezero(int ind1, int ind2, vector<vector<int>>& ans) {
        int row = ans.size();
        int col = ans[0].size();
        
        // Set the entire row to zero
        for (int i = 0; i < col; i++) {
            ans[ind1][i] = 0;
        }
        // Set the entire column to zero
        for (int i = 0; i < row; i++) {
            ans[i][ind2] = 0;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> ans(row, vector<int>(col));

        // Copy original matrix to ans
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans[i][j] = matrix[i][j];
            }
        }

        // Find zeroes in the original matrix and update ans
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    makezero(i, j, ans);
                }
            }
        }

        // Copy the result back to the original matrix
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                matrix[i][j] = ans[i][j];
            }
        }
    }
};
