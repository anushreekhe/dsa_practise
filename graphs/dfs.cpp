#include <bits/stdc++.h>
using namespace std;

void dfss(int node, vector<int> adj[], int vis[], vector<int>& dfs){
    if(vis[node]==0){
        vis[node]=1;
        dfs.push_back(node);
        for(auto it : adj[node]){
            if(vis[it]==0){
                dfss(it, adj, vis, dfs);
            }
        }
    }
}

vector<int> bfs(int V, vector<int> adj[]) {
    int vis[V]={0};
    int start=0;
    vector<int> dfs;
    dfss(start, adj, vis, dfs);
    return dfs;
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<int> adj[V];

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);   // undirected graph
    }

    vector<int> result = bfs(V, adj);

    cout << "BFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}