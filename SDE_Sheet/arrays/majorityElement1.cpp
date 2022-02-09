// https://leetcode.com/problems/majority-element/submissions/
#include <bits/stdc++.h>
using namespace std;

//O(N) solution using O(N) extra space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        for(int i=0;i<nums.size();i++){
            if(f.find(nums[i]) == f.end()){
                f[nums[i]] = 1;
            }
            else
                f[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(f[nums[i]] > (nums.size()/2)){
                return nums[i];
            }
        }
        return 0;
        
    }
};

//O(NlogN) Solution using O(1) space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//Morees voting algorithm
//O(1) Solution using O(1) space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int ans = nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(count ==0){
                ans = nums[i];
                count = 1;
            } else if (ans==nums[i])
                count++;
            else 
                count--;
        }
        return ans;
     }
};
