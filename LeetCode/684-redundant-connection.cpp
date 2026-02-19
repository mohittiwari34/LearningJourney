class Solution {
public: 
    int findParent(int x,vector<int>&parent){
        if(parent[x]==x){
            return x;
        }

        return parent[x]=findParent(parent[x],parent);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>parent(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        vector<int>ans;
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            int pu=findParent(u,parent);
            int pv=findParent(v,parent);
            if(pu==pv){
                ans=e;
            }
            else{
                parent[pu]=pv;
            }
        }
        return ans;
    }
};
