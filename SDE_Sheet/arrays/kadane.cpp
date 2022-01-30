#include <bits/stdc++.h>
using namespace std;

// O(N^2) Solution
class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
     for (int i = 0; i < nums.size(); i++) {
        int curr_sum = 0;
        for (int j = i; j < nums.size(); j++) {
           curr_sum += nums[j];
           if (curr_sum > max_sum) {
           max_sum = curr_sum;
      }
    }
   }
   return max_sum;
  }
};


// O(N) Solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int final_max = INT_MIN,maxi=0;
        
        for (int i=0;i<nums.size();i++){
            maxi+=nums[i];
            
            final_max=max(final_max,maxi);
            
            if(maxi<0)
                maxi=0;
        }
        
        return final_max;
        
        
    }
};