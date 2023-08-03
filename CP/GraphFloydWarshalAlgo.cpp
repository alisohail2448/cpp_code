#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;



// void shortest_distance(vector<vector<int>>&matrix){
// 	    // Code here
// 	    int n = matrix.size();
// 	    int m=matrix[0].size();
// 	    for(int k = 0;k<n;k++){
// 	        for(int i = 0;i<n;i++){
// 	            for(int j = 0; j<m; j++){
// 	                 if(matrix[i][k]==-1||matrix[k][j]==-1){
//                     continue;
//                 }
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=matrix[i][k]+matrix[k][j];
//                 }else{
//                     if(matrix[i][j]>matrix[i][k]+matrix[k][j]){
//                         matrix[i][j]=matrix[i][k]+matrix[k][j];
//                     }
// 	            }
// 	        }
// 	    }
// 	}
// 	}


int main(){
    vector<vector<int>> graph = {
        {0, 5, inf, 10},
        {inf, 0, 3, inf},
        {inf, inf, 0, 1},
        {inf, inf, inf, 0},
    };
    int n = graph.size();
        vector<vector<int>> dist = graph;
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(dist[i][k] + dist[k][j] < dist[i][j]){
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(dist[i][j] == inf){
                    cout<<inf;
                }
                else{
                    cout<<dist[i][j]<<" ";
                }
            }
            cout<<'\n';
            
        }
        
        
    return 0;
}