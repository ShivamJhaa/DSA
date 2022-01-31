#include <bits/stdc++.h>
using namespace std;

//O(NlogN+N) solution by modifying the given array
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return ans;
        
    }
};

//Without modifying the array in 0(1) space

