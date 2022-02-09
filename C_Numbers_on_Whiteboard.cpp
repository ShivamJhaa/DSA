// https://codeforces.com/problemset/problem/1430/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void Solve(){
    int n; cin>>n;
    if(n==2){
        cout<<2<<endl;
        cout<<2<<" "<<1<<endl;
    }
    else if (n==3){
        cout<<2<<endl;
        cout<<3<<" "<<1<<endl;
        cout<<2<<" "<<2<<endl;
    }
    else {
        cout<<2<<endl;
        cout<<n<<" "<<n-2<<endl;
        cout<<n-1<<" "<<n-1<<endl;
        n--;
        while(n>=3){
            cout<<n<<" "<<n-2<<endl;
            n--;
        }
    }
}

int main(){
    fastio
    int n; cin>>n;
    while(n--){
        Solve();
    }
return 0;
}