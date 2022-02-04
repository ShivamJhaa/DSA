#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c)) - min(a,min(b,c))<<endl;
return 0;
}