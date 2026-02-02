class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>m;
        m[0]=1;
        int n=nums.size();
        int count=0;
        int prefixsum=0;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            if(m.find(prefixsum-goal)!=m.end()){
                count+=m[prefixsum-goal];
            }
            m[prefixsum]++;

        }
        return count;
        
    }
};
