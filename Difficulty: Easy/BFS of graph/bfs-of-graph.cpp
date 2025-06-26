class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int v= adj.size();
        vector<int> result;
        
        queue<int> q;
        vector<bool> visited(v,false);
        
        visited[0]=true;
        q.push(0);
        
        while(!q.empty()){
            int currNode=q.front();
            result.push_back(currNode);
            
            q.pop();
            
            
            for(int adjNode: adj[currNode]){
                if(!visited[adjNode]){
                    visited[adjNode]=true;
                    q.push(adjNode);
                }
            }
        }
        
        return result;
    }
};