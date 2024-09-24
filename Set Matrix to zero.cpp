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


//lets go for optimise solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        bool firstrow=false;
        bool firstcol=false;

//just check col and row are zero or not
        for(int i=0;i<m;i++){
                if(matrix[0][i]==0){
                    firstrow=true;
                    break;
                }    
        }

        for(int i=0;i<n;i++){
                if(matrix[i][0]==0){
                    firstcol=true;
                    break;
                }
        }


        //now go into remaining arrat and if you find zero make row and col set 0
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }




        //now lets set zeros to rows ans colums
        for(int i=1;i<n;i++){
            if(matrix[i][0]==0){
                for(int j=0;j<m;j++){
                    matrix[i][j]=0;//lets make column zeor
                }
            }
        }
        for(int i=1;i<m;i++){
            if(matrix[0][i]==0){
                for(int j=0;j<n;j++){
                    matrix[j][i]=0;//rows ko zero
                }
            }
        }


        //if row and col had zero let them make zero
        if(firstrow){
            for(int i=0;i<m;i++)
            matrix[0][i]=0;
        }
        if(firstcol){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};
