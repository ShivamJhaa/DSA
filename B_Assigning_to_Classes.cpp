#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int n;
       cin>>n;
       int m=2*n;
       int arr[m];
       for(int j=0;j<m;j++){
           cin>>arr[j];
       }
       
       sort(arr,arr+m);
// meadian of array is in middle
//for 2n length middle is n-1 and n
       cout<<abs(arr[n-1]-arr[n])<<endl;
   }
     
}