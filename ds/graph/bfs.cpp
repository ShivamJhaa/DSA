#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void bfs(vector<int>adj[], int vis[]) {
    
}

int main(){
    fastio
    int n,m;
    cin>>n>>m;

    // // Graph representation using adjacency matrix.
    // int adjMatrix[n+1][n+1];

    // for(int i=0;i<n+1;i++) {
    //     for(int j=0;j<n+1;j++) {
    //         adjMatrix[i][j] = 0;
    //     }
    // }

    // for(int i=0;i<m;i++) {
    //     int x,y;
    //     cin>>x>>y;
    //     adjMatrix[x][y] = 1;
    //     adjMatrix[y][x] = 1; // Only for the case when the given graph is undirected.
    // }

    //Graph representation using adjacency list.
    vector<int>adjList[n+1];

    for(int i=0;i<m;i++) {
        int x,y;
        cin>>x>>y;
        adjList[x].push_back(y);
        adjList[y].push_back(x); // Only for the case when the graph is undirected.
    }

    // Weighted graph representation.
    vector<pair<int,int>>g[n+1];

    for(int i=0;i<m;i++) {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
        g[y].push_back({x,wt}); // Only for the case when the graph is undirected.
    } 

    return 0;
}