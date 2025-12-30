class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m[n];
        int ans=2;
        if(n<=2) {
            return n;
        }
        
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                int d=nums[i]-nums[j];
                if(m[j].count(d)){
                    m[i][d]=max(m[i][d],1+m[j][d]);
                }
                else{
                    m[i][d]=max(m[i][d],2);
                }
                ans=max(m[i][d],ans);
            }
            
        }
        return ans;
    }
    
};
