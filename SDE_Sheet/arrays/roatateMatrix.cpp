#include <bits/stdc++.h>
using namespace std;

// O(2*N^2) solution using O(n^2) extra space
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n= matrix[0].size();
        vector<vector<int>>ans(m);
        
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i].push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[j][n-i-1] = ans[i][j];
            }
        }
    }
};

// O(2*N^2) solution using O(1) extra space
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
       
        for(int i=0;i<m;i++){
            for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};