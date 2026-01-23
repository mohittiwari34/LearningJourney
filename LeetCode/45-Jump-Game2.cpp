class Solution {
public:
    int find(int n,vector<int>& nums,int i,vector<int>&dp){
        if(i>=n-1){
            return 0;
        }
        if(nums[i]==0){
            return 1e9;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=1e9;
        for(int jump=1;jump<=nums[i];jump++){
           ans=min(ans,1+find(n,nums,i+jump,dp));
        }
        return dp[i]=ans;


    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, -1);
        return find(n,nums,0,dp);
    }
};
