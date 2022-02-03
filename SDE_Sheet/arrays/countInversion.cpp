#include <bits/stdc++.h>
using namespace std;

//O(N^2) Solution
long long getInversions(long long *arr, int n){
    // Write your code here.
     long long count=0;
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
              count++;
        }
    }
    return count;
}

//O(NlogN) Solution
