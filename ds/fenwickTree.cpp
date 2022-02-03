#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int FTree[1000];
int n; 
//Total (N*logN) to create a fenwick or BIT Tree

//O(LogN) per update
void update(int x, int val){
    for(; x<=n; x+=x&(-x)){
        FTree[x]+=val;
    }
}

//O(logN) per query
int query(int x){
    int sum = 0;
    for(;x>0;x-=x&-x){
        sum+=FTree[x];
    }

    return sum;
}

int main(){
    fastio
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];

    }

return 0;
}