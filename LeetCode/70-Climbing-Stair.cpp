class Solution {
public:
    int find(int stair,int n,vector<int>&dp){
        if(stair==n){
            return 1;
        }
        if(stair>n){
            return 0;
        }
        if(dp[stair]!=-1){
            return dp[stair];
        }
        dp[stair]=find(stair+1,n,dp)+find(stair+2,n,dp);
        return dp[stair];
    }
    int climbStairs(int n) {
        vector<int>dp(n+2,-1);
        dp[n]=1;
        dp[n+1]=0;
        return find(0,n,dp);
    }
};
