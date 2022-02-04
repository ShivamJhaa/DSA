#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int m,n;
    cin>>m>>n;
    int mode=0;
    bool type = true;
    for(int i=0;i<m;i++){
        if(mode%2==0){
           for(int j=0;j<n;j++)
           cout<<"#";
           cout<<endl;
           mode++;
        }
        else if(mode%2==1 && type){
            for(int j=0;j<n-1;j++)
            cout<<".";
            cout<<"#"<<endl;
            mode++;
            type=false;
        }
        else {
            cout<<"#";
            for(int j=1;j<n;j++)
            cout<<".";
            cout<<endl;
            mode++;
            type=true;
        }

    }
return 0;
}