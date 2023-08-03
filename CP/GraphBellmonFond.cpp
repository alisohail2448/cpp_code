#include<bits/stdc++.h>
using namespace std;

const int inf = 1e7;


//   vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
//         // Code here
//         vector<int>dist(V, 1000000000);
//         dist[S] = 0;
        
//         for(int i = 0;i<V;i++){
//             for(int j = 0; j<adj.size();j++){
//                 int u = adj[j][0];
//                 int v = adj[j][1];
//                 int w = adj[j][2];
//                 if(dist[u] + w < dist[v]){
//                     dist[v] = dist[u] + w;
//                 }
//             }
//         }
//         return dist;
//     }


int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>>edges;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src;
    cin>>src;
    vector<int>dist(n, inf);
    dist[src] = 0;
    for (int iter = 0; iter < n-1; iter++)
    {
        for(auto e: edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v] = min(dist[v], w+dist[u]);
        }
    }
    for(auto i : dist){
        cout<<i<<" ";
    }
    cout<<'\n';
    
    
    return 0;
}