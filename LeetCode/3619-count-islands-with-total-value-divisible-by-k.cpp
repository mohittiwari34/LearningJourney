class Solution {
public:
    long long dfs(vector<vector<int>>& grid, int i,int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0){
            return 0;
        }
        
        long long sum=grid[i][j];
        grid[i][j]=0;
        sum+=dfs(grid,i,j+1);
        sum+=dfs(grid,i,j-1);
        sum+=dfs(grid,i+1,j);
        sum+=dfs(grid,i-1,j);
        return sum;

    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>0){
                    long long total=dfs(grid,i,j);
                    if(total%k==0){
                        count++;
                    }
                }
            }
        }
        return count;

    }
};
