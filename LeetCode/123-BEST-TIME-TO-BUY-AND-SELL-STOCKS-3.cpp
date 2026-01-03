class Solution {
public:
    int find(int day,int trans,int buy,int n,vector<int>& prices,vector<vector<vector<int>>>&dp){
        if(trans==0) {
            return 0;
        }
        if(day==n){
            return 0;
        }
        if(dp[day][trans][buy]!=-1){
            return dp[day][trans][buy];
        }
        if(buy){
            //kharidunga ya nahi kharidunga
            return dp[day][trans][buy]= max(-prices[day]+find(day+1,trans,0,n,prices,dp),
            find(day+1,trans,1,n,prices,dp));
        }
        else{
            //bechuga ya nahi
            return dp[day][trans][buy]=max(prices[day]+find(day+1,trans-1,1,n,prices,dp),
            find(day+1,trans,0,n,prices,dp));
        }


    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(2,-1)));
        for 
        return find(0,2,1,n,prices,dp);
        
    }
};
