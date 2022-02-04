#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int gas = (k*l)/(n*nl);
    int lime = (c*d)/(n);
    int sal = p/(np*n);
    int ans = min(gas,min(lime,sal));
    cout<<ans<<endl;

    return 0;
}