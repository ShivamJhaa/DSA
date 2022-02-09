// https://leetcode.com/problems/missing-number/
#include <bits/stdc++.h>
using namespace std;

//XOR Solution 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1 = 0,x2=0;
        for(int i=0;i<nums.size();i++){
            x1 = x1 ^ nums[i];
            x2 = x2 ^ (i+1);
        }
        return x1^x2;
    }
};

//Sum solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int &x: nums) sum+=x;
        return (n*(n+1))/2 - sum;
    }
};