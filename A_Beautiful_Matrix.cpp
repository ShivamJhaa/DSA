#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int arr[5][5];
    int posi,posj;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          cin>>arr[i][j];
          if(arr[i][j]==1)
          {
              posi=i,posj=j;
              break;
          }

        }
    }
    cout<<abs(2-posi)+abs(2-posj)<<endl;

return 0;
}