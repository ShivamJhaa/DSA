#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int k;
    cin>>k;
    string str;
    cin>>str;
    unordered_map<char,int>freq;
    for(int i=0;i<str.size();i++)
    freq[str[i]]++;

    string ans = "";
    bool check = false;
    for(auto x:freq){
        if(x.second % k !=0){
            check = true;
            break;
        }
    }
    if(check)
    cout<<"-1"<<endl;
    else {
        string f = "";
        for(auto x: freq){
            int t = x.second/k;
            while(t--)
            ans+=x.first;
        }
        while (k--)
        {
            f+=ans;
        }
        cout<<f<<endl;
    }
return 0;
}