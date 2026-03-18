class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<long long>>v(m+1,vector<long long>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i+1][j+1]=grid[i][j]+v[i][j+1]+v[i+1][j]-v[i][j];
                if(v[i+1][j+1]<=k){
                ans++;
            }
            }
            
        }
        return ans;
        
    }
};
