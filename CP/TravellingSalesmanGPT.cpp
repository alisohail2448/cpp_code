#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int INF = INT_MAX; // set maximum value for integer

int tsp(vector<vector<int>>& graph, vector<int>& path, vector<bool>& visited, int curr, int n, int cost) {
    if (path.size() == n) { // if all nodes have been visited
        return cost + graph[curr][0]; // add the cost to return to the starting node
    }

    int min_cost = INF;
    int next_node = -1;

    for (int i = 1; i < n; i++) {
        if (!visited[i]) { // if node i has not been visited yet
            visited[i] = true;
            path.push_back(i);

            int new_cost = tsp(graph, path, visited, i, n, cost + graph[curr][i]);
            if (new_cost < min_cost) {
                min_cost = new_cost;
                next_node = i;
            }

            path.pop_back();
            visited[i] = false;
        }
    }

    if (next_node != -1) { // if a new node was added to the path
        visited[next_node] = true;
        path.push_back(next_node);
    }

    return min_cost;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>(n, INF));

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
        graph[v][u] = w; // assuming undirected graph
    }

    vector<int> path;
    vector<bool> visited(n, false);
    visited[0] = true; // start at node 0
    path.push_back(0);

    int min_cost = tsp(graph, path, visited, 0, n, 0);

    cout << "Minimum cost: " << min_cost << endl;

    cout << "Path: ";
    for (int node : path) {
        cout << node << " ";
    }
    cout << "0" << endl; // add the starting node to the end of the path to complete the cycle

    return 0;
}
