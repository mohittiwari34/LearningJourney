class Solution {
public: 
    void dfs(int i,vector<vector<int>>&adj,vector<bool>&visited){
        visited[i]=true;
        for(int m:adj[i]){
            if(!visited[m]){
                dfs(m,adj,visited);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        
        vector<vector<int>>adj(n);
        for(auto &p: connections){
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);

        }
        int components=0;
        vector<bool>visited(n);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                components++;
            }
        }
        return components-1;
    }
};
