class Solution {
public:
    vector<vector<int>>dp;
    int f(int i,int j){
        if(j==0||j==i){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]=f(i-1,j-1)+f(i-1,j);
    }
    vector<vector<int>> generate(int numRows) {
        dp.assign(numRows,vector<int>(numRows,-1));
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++){
            vector<int>b;
            for(int j=0;j<=i;j++){
                b.push_back(f(i,j));
            }
            v.push_back(b);
        }
        
        return v;
    }
};
