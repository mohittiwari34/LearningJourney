class Solution {
public:
    bool find(int i,int j,vector<vector<int>>&dp,string &s){
        if(i>=j){
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==s[j]){
            return dp[i][j]=find(i+1,j-1,dp,s);
        }
        return dp[i][j]=false;
    }
    
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int count=0;
        // for(int i=0;i<n;i++){
        //     count+=find(i,i,s);
        //     count+=find(i,i+1,s);
        // }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(find(i,j,dp,s)){
                    count++;
                }
            }
        }
        return count;
    }
};
