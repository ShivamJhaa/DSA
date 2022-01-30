#include <bits/stdc++.h>
using namespace std;

//O(NLogn) Solution using STL
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
    }
};

//O(2N) Solution

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZero=0,countOne=0,countTwo=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            countZero++;
            else if(nums[i]==1)
            countOne++;
            else
            countTwo++;
        }
        int idx = 0;
        while(countZero--){
            nums[idx] = 0;
            idx++;
        }
        while(countOne--){
            nums[idx] = 1;
            idx++;
        }
        while(countTwo--){
            nums[idx] = 2;
            idx++;
        }
        
    }
};

// O(N) Solution using Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;

        while(m<h){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else {
                swap(nums[m],nums[h]);
                h--;
            }
        }
        
    }
};