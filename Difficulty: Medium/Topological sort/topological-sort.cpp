class Solution {
  public:
   vector<int> topoSort(int V, vector<vector<int>>& edges) {
    vector<int> inDegree(V, 0);
    vector<int> result;
    
    
    vector<vector<int>> adj(V);
    
    for(auto& edge: edges){
        int u=edge[0];
        int v=edge[1];
        adj[u].push_back(v);
    }

    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            inDegree[v]++;
        }
    }

    queue<int> q;

   
    for (int i = 0; i < V; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int v : adj[node]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }

    


    return result;
}

};