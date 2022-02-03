//https://www.spoj.com/problems/RMQSQ/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int n;
int rArr[10000];
int arr[100000];

void preProcess(){
    int block = ceil(sqrt(n));
    for(int i=0;i<n;i++){
        int x = i/block;
        rArr[x] = min(rArr[x], arr[i]);
    }
}

int getMin(int l,int r) {
    int block = ceil(sqrt(n));
    int lBlock = l/block;
    int rBlock = r/block;
    int ans = INT_MAX;

    if(lBlock == rBlock){
        for(int i=l;i<=r;i++){
            ans = min(ans,arr[i]);
        }
    }
    else {
        for(int i=l;i<block*(lBlock+1);i++){
            ans=min(ans,arr[i]);
        }
        for(int i=lBlock+1;i<rBlock;i++){
            ans = min(ans,rArr[i]);
        }
        for(int i=block*(rBlock);i<=r;i++){
            ans = min(ans,arr[i]);
        }
    }

    return ans;
}

int main(){
    fastio
    memset(rArr, INT_MAX, sizeof rArr);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q; cin>>q;
    for(int i=0;i<q;i++){
        int l,r; cin>>l>>r;
        cout<<getMin(l,r)<<endl;
    }
    
return 0;
}