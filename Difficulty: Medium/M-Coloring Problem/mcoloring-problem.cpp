class Solution {
  public:
  
    bool isSafe(int node, int color[], vector<vector<int>>& adj, int col, int V) {
        for (int i = 0; i < V; i++) 
        {
            if (adj[node][i] && color[i] == col) return false;
        }
        return true;
    }
    
    bool solve(int node, int color[], vector<vector<int>>& adj, int m, int V) {
        if (node == V) return true;  
        
        for (int c = 1; c <= m; c++) {
            if (isSafe(node, color, adj, c, V)) {   
                color[node] = c;
                if (solve(node+1, color, adj, m, V)) return true; 
                color[node] = 0;   
            }
        }
        return false;  
    }
    
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<int>> adj(v, vector<int>(v, 0));
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int w = edges[i][1];   // renamed from 'v' to 'w'
            adj[u][w] = 1;
            adj[w][u] = 1;
        }

        int color[v] = {0};
        return solve(0, color, adj, m, v);
    }
};