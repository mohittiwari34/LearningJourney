class Solution {
public:
    
    void find(int n,vector<int>&dp,vector<int>&v){
        dp[0]=0;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            dp[i]=dp[i/2]+i%2;
            v.push_back(dp[i]);
        }
    }
    vector<int> countBits(int n) {
        //cout<<bitset<4>(2);
        //cout<<no(1011);
        vector<int>dp(n+1);
        vector<int>v;
        find(n,dp,v);
        return v;
    }
};
