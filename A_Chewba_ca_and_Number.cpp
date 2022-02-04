#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    string str;
    cin>>str;
    string ans=str;
    int o = str[0] - '0';
    if((9-o) < o && o!=9)
    ans[0] = (9-o) + '0';
    else 
    ans[0] = o + '0'; 
    for(int i=str.size()-1;i>0;i--){
       int x = str[i] - '0';
       if((9-x) < x)
       ans[i] = (9-x)+'0';
       else 
       ans[i] = x+'0';
    }
    cout<<ans<<endl;
return 0;
}