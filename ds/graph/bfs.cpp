#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void dfs(vector<int>adj[], int n) {
    
}

void bfs(vector<int>adj[], int n) {
    vector<int>vis(n+1,0);

    for(int i=1;i<=n;i++) {
        if (!vis[i]) {
            queue<int>q;
            q.push(i);
            vis[i] = 1;

            while(!q.empty()) {
                int node = q.front();
                q.pop();
                
                cout<<node<<" ";

                for(auto it: adj[node]) {
                    if(!vis[it]) {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
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

    // // Weighted graph representation.
    // vector<pair<int,int>>g[n+1];

    bfs(adjList, n);

    return 0;
}