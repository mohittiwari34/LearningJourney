class Solution {
public:
    int subarraySum(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        m[0]=nums[0];
        for(int i=1;i<n;i++){
            m[i]=nums[i]+m[i-1];
            //cout<<m[i]<<endl;
        }
        int count=0;
        for(int i=0;i<n;i++){
            int start=max(0,i-nums[i]);
            if(m[start-1]){
                count+=m[i]-m[start-1];
            }
            else{
                count+=m[i];
            }
            
            cout<<m[i]-m[start]<<endl;
        }
        return count;
    }
};
