// https://leetcode.com/problems/majority-element-ii/
#include <bits/stdc++.h>
using namespace std;

//O(N) Solution using extra space 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(f.find(nums[i]) == f.end())
                f[nums[i]] = 1;
            else 
                f[nums[i]]++;
        }
        for (auto x: f) {
          if (x.second > (nums.size() / 3))
             ans.push_back(x.first);
             }
        return ans;
        
    }
};

// O(N) solution without using extra space
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = -1, num2 = -1,c1=0,c2=0;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1)
                c1++;
            else if(nums[i]==num2)
                c2++;
            else if(c1==0)
                num1 = nums[i],c1++;
            else if (c2==0)
                num2 = nums[i],c2++;
            else
                c1--,c2--;
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==num1)
                count++;
        if(count>(nums.size()/3))
        ans.push_back(num1);
        count=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==num2)
                count++;
        if(count>(nums.size()/3) && num1!=num2)
        ans.push_back(num2);
        
        return ans;
        
        
    }
};