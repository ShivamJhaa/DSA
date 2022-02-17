#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n,m;
    cin>>n>>m;
    long long sum=0;
    while(n--){
        int temp;
        cin>>temp;
        sum+=temp;
    }
   return sum%m;
}

int main(){
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int ans = solve();
        cout<<"Case #"<<i<<": "<<ans<<endl;
        i++;
    }
}