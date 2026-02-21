class Solution {
public:
    void dfs(int node,vector<vector<int>>&v,vector<int>&vis,vector<int>&s){
        for( int x :v[node]){
            if(vis[x]!=1){
                vis[x]=1;
                s.push_back(x);
                dfs(x,v,vis,s);
            }
        }

    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {

        vector<vector<int>>v(n);
        for(auto &p:edges){
            v[p[1]].push_back(p[0]);
        }
        vector<vector<int>>b(n);
        for(int i=0;i<n;i++){
            vector<int>vis(n,0);
            vector<int>s;
            dfs(i,v,vis,s);
            sort(s.begin(),s.end());
            b[i]=s;
        }
        return b;
        
    }
};
