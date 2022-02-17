// https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        if(n==0) return 0;
        int arr[300] = {};
        arr[s[0]]++;
        int i=0,j=0;
        int ans = 1;
        while(j<n-1){
            if(arr[s[j+1]]==0){
                j++;
                arr[s[j]]=1;
                ans = max(ans,j-i+1);
            }
            else {
                arr[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};