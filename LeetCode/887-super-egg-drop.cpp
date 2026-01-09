class Solution {
public:
    int find(int k, int n,vector<vector<int>>&dp){
        if(n==1){
            return k;
        }
        if(k==0){
            return 0;
        }
        if(dp[k][n]!=-1){
            return dp[k][n];
        }
        int ans=INT_MAX;
        int temp;
        for(int i=1;i<=k;i++){
            temp=1+max(find(i-1,n-1,dp),find(k-i,n,dp));
            ans=min(temp,ans);
        }
        return dp[k][n]=ans;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return find(n,k,dp);
    }
};
