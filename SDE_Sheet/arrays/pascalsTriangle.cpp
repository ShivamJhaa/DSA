#include <bits/stdc++.h>
using namespace std;

//Time Complexity = 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>pascal(numRows);
        for(int i=0;i<numRows;i++){
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    pascal[i].push_back(1);
                }
                else {
                    pascal[i].push_back(pascal[i-1][j]+pascal[i-1][j-1]);
                }
                
            }
        }
        return pascal;
    }
};