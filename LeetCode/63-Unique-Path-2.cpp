class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(n==0||m==0) return 0;
        vector<vector<long long>>dp(n,vector<long long>(m,0));
        if(obstacleGrid[n-1][m-1]==1) return 0;
        dp[n-1][m-1]=1;
        for(int j=m-2;j>=0;j--){
            if(obstacleGrid[n-1][j]==0){
                dp[n-1][j]=dp[n-1][j+1];
            }
            else{
                dp[n-1][j]=0;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(obstacleGrid[i][m-1]==0){
                dp[i][m-1]=dp[i+1][m-1];
                
            }
            else{
                dp[i][m-1]=0;
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=m-2;j>=0;j--){
                if(obstacleGrid[i][j]==0){
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
                }
            }
        }
        return (int)dp[0][0];
    }
};

