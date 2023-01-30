int count = 0;
    bool dfs(vector<int> adj[], vector<int> &visited, int node){
        visited[node]=1;
        bool select = false;
        for(auto i:adj[node]){
            if(visited[i]==0){
                bool ischildselected = dfs(adj,visited,i);
                
            if(!ischildselected){
                select = true;
            }
        }
    }
    
    if(select){
        count++;
    }
     return select;
}
    
    
    int countVertex(int N, vector<vector<int>>edges){
        // code here
        vector<int> adj[N+1];
        for(auto i: edges){
            int v = i[0];
            int u = i[1];
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        
        vector<int> visited(N+1, 0);
        dfs(adj, visited,1);
        return count;
    }