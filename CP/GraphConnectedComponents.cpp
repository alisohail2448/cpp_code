#include<bits/stdc++.h>
using namespace std;

vector<bool>vis;
int n, m;
vector<vector<int>> adj;
vector<int> components;


int getComp(int idx){
    if(vis[idx])
        return 0;
    vis[idx] = true;
    int ans = 1;
    for(auto i: adj[idx]){
        if(!vis[i]){
            ans += getComp(i);
            vis[i] = true;
        }
    }
    return ans;
}


int main(){
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n,0);
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            components.push_back(getComp(i));
        }
    }
    // for(auto i: components){
    //     cout<<i<<" ";
    // }

    long long ans = 0;
    for(auto i: components){
        ans += i*(n-i);
    }
    cout<<(ans/2)<<endl;
    
    return 0;
}