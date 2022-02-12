// https://leetcode.com/problems/longest-consecutive-sequence/
#include <bits/stdc++.h>
using namespace std;

//O(NlogN+N) solution
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int count = 0;
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1] == nums[i]+1){
                count++;
                ans = max(ans,count);
            }
            else
                count = 0;
        }
        
        return ans+1;
    }
};

//O(N) Solution
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        unordered_map<int,int>freq;
       for(int i=0;i<nums.size();i++)
           freq[nums[i]]++;
        int ans = 1;
        int count = 1;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]-1]>0)
                continue;
            else{
                int num = ++nums[i];
                while(freq[num]>0){
                    count++;
                    ans=max(ans,count);
                    num++;
                }
                count = 1;
            }
        }
        return ans;
    }
};