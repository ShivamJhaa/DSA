#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void Solve(){
    string str;
    cin>>str;
    int cnt = 0;
    vector<string>ans;
    for(int i=0;i<str.size();i++){
        if(str[i]!='0')
        {
            cnt++;
            string a = "";
            a += str[i];
            int j=i;
            while(j<str.size()-1)
                a+='0',j++;
            ans.push_back(a);

        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    fastio
    int n;
    cin>>n;
    while(n--)
    Solve();
return 0;
}