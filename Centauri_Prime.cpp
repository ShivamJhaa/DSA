#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int i){
    string str;
    cin>>str;
    string ans = "";
    int n = str.size() - 1;
    if(str[n]=='y' || str[n]=='Y')
    ans = "nobody";
    else if (str[n]=='a' ||str[n]=='e' ||str[n]=='i' ||str[n]=='o' ||str[n]=='u'||str[n]=='A'||str[n]=='E'||str[n]=='I' || str[n]=='O' || str[n]=='U')
    ans = "Alice";
    else 
    ans = "Bob";

    cout<<"Case #"<<i<<": "<<str<<" is ruled by "<<ans<<"."<<endl;
}

int main(){
    fastio
    int n;
    cin>>n;
    int i=1;
    while(n--){
        solve(i);
        i++;
    }
return 0;
}