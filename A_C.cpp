#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    bool check = true;
    ll count = 0;
    if(a<b){
      a+=b;
      count++;
      check = false;
    }
    else{
        b+=a;
        count++;
    }
    while (a<=n || b<=n)
    {
        if(check){
            a+=b;
            check = false;
        }
        else{
            b+=a;
            check = true;
        }
        count++;
    }
    cout<<--count<<endl;
}

int main(){
    fastio
    int n;
    cin>>n;
    while(n--)
    solve();
return 0;
}