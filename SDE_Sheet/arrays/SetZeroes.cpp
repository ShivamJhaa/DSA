#include <bits/stdc++.h>
using namespace std;

//O(N+M) Space Complexity Solution=0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int row[201];
        int col[201];
        for(int i=0;i<201;i++){
            row[i]=1;
            col[i]=1;
        }
        
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(matrix[i][j]==0){
                    col[j]=0;
                    row[i]=0;
                }
            }
        }
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(col[j]==0 || row[i]==0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        
}
};

//O(1) Solution

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        bool colIs = false;
        
        for(int i=0;i<rowSize;i++){
            if(matrix[i][0] ==0) colIs = true;
            for(int j=1;j<colSize;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
       for(int i=rowSize-1;i>=0;i--){
           for(int j=colSize-1;j>=1;j--){
               if(matrix[i][0] == 0 || matrix[0][j]==0){
                       matrix[i][j] = 0;
               }
           }
           if(colIs)matrix[i][0] = 0;
       }
        
        
}
};