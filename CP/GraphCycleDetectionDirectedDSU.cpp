#include<bits/stdc++.h>
using namespace std;


bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &stack){
    stack[src] = true;
    if(!vis[src]){
        vis[src] = true;
        for(auto i : adj[src]){
            if(!vis[i] and isCycle(i, adj, vis, stack)){
                return true;
            }
            if(stack[i])
                return true;
        }
    }
    stack[src] = false;
    return false;
}

int main(){

    int n, m;
    cin>>n>>m;

    vector<vector<int>>adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    bool cycle = false;
    vector<int>stack(n ,0);
    vector<bool>vis(n,0);
    for (int i = 0; i < n; i++)
    {
        if(!vis[i] and isCycle(i, adj, vis, stack)){
            cycle = true;
        }
    }
    if(cycle){
        cout<<"Cycle is Present";
    }
    else{
        cout<<"Cycle is not Present";
    }
    

    return 0;
}