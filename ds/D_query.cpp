//https://www.spoj.com/problems/DQUERY/

#include <bits/stdc++.h>
using namespace std;
int arr[30001], ans[200001];
int fre[1000001];
int cnt = 0;
int block = 555;

struct query{
    int l;
    int r;
    int i;
};
query Q[200001];
bool comp (query a, query b) {
    if(a.l/block != b.l/block)
    return a.l/block < b.l/block;

    return a.r<b.r;
}

void add(int pos) {
    fre[arr[pos]]++;
    if(fre[arr[pos]] == 1)
    cnt++;
}

void remove(int pos) {
    fre[arr[pos]]--;
    if(fre[arr[pos]]==0)
    cnt--;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n,q;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];

    cin>>q;
    for(int i=0;i<q;i++){
        cin>>Q[i].l>>Q[i].r;
        Q[i].i = i; Q[i].l--; Q[i].r--;
    }

    sort(Q, Q+q, comp);

    int ML=0,MR= -1;

    for(int i=0;i<q;i++){
        int L = Q[i].l;
        int R = Q[i].r;

        while(ML>L)
        ML--,add(ML);
        while(MR<R)
        MR++,add(MR);

        while(ML < L)
		remove(ML) , ML++;
 
		while(MR > R)
		remove(MR) , MR--;

        ans[Q[i].i] = cnt;
    }

    for(int i=0;i<q;i++)
    cout<<ans[i]<<endl;

}