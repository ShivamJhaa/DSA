#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int n;
    cin>>n;
    int ans =0;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if((str[0]=='+' && str[1]=='+') || (str[1]=='+' || str[2]=='+'))
        ans++;
        else 
        ans--;
    }
    cout<<ans<<endl;
return 0;
}