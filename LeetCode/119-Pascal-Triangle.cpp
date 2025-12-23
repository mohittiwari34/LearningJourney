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
        else{
            return dp[i][j]=f(i-1,j-1)+f(i-1,j);
        }
    }
    vector<int> getRow(int rowIndex) {
        dp.assign(rowIndex+1,vector<int>(rowIndex+1,-1));
        vector<int>b;
        for(int i=0;i<rowIndex+1;i++){

            for(int j=0;j<=i;j++){
                
                if(i==rowIndex){
                    b.push_back(f(i,j));
                }
            }
            
        }
        return b;
    }
};
