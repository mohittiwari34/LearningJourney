class Solution {
public:
    int solve(int i,int used,vector<int>& nums,vector<vector<int>>&dp){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][used]!=-1){
            return dp[i][used];
        }
        if(nums[i]==1){
            return dp[i][used]=1+solve(i+1,used,nums,dp);
        }
        else{
            if(used==0){
                return dp[i][used]= solve(i+1,1,nums,dp);
            }
            else{
                return dp[i][used]= 0;
            }
        }
    }
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        vector<vector<int>> dp(nums.size(), vector<int>(2, -1));

        for(int i=0;i<nums.size();i++){
            ans=max(ans,solve(i,0,nums,dp));
        }
        if(ans==nums.size()){
            return ans-1;
        }
        return ans;
    }
};
