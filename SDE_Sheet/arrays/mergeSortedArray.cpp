#include <bits/stdc++.h>>
using namespace std;

// Time Complexity            ----    Space Complexity

// 1-O(n+m)log(n+m)                    O(n+m)
// 2-O(n+m)			                   O(n+m)					
// 3-O(nm)			                   O(1)
// 4-O(n+m)log(n+m)		               O(1)(Gap Method or Shell Short Intuition)

//O(N+M) Solution with O(N+M) Extra space
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>result(m+n);
        
        int x=0,y=0,z=0;
        
        while(x<m && y<n){
            if(nums1[x]<nums2[y])
                result[z++]=nums1[x++];
            else
                result[z++]=nums2[y++];
        }
        
        while(x<m){
            result[z++]=nums1[x++];
        }
        while(y<n){
            result[z++]=nums2[y++];
        }
        
        for (int i=0;i<m+n;i++)
            nums1[i]=result[i];
    }
};