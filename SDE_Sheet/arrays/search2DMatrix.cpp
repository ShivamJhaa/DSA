// https://leetcode.com/problems/search-a-2d-matrix/
#include <bits/stdc++.h>
using namespace std;

//O(logn) solution using binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int n = matrix.size();
        int m = matrix[0].size();
        int l =0;
        int r = (m*n - 1);
        
        while(l!=r)
        {
            int mid = (l+r-1)/2;
            if(matrix[mid/m][mid%m]<target)
                l= mid+1;
            else
                r = mid;
        }
        return matrix[r/m][r%m] == target;
    }
};