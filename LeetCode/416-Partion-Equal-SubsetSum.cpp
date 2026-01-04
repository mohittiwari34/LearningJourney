class Solution {
public:
    int find(double targetsum,vector<int>& nums,int n,int i,vector<vector<double>>&dp){
        if(targetsum==0){
            return 1;
        }
        if(i==n){
            return 0;
        }
        if(dp[i][targetsum]!=-1){
            return dp[i][targetsum];
        }
        if(nums[i]>targetsum){
            return dp[i][targetsum]=find(targetsum,nums,n,i+1,dp);
        }
        else{
            return dp[i][targetsum] =find(targetsum-nums[i],nums,n,i+1,dp) || find(targetsum,nums,n,i+1,dp);
        }

    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        double targetsum=sum/2.0;
        vector<vector<double>>dp(nums.size()+1,vector<double>(targetsum+1,-1));
        return find(targetsum,nums,nums.size(),0,dp);
    }
};
