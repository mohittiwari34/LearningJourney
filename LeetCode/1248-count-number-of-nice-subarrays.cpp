class Solution {
public:
    int atmost(vector<int>& nums, int k,int n){
        int left=0;
        int count=0;
        int ans=0;
        for(int right=0;right<n;right++){
            if(nums[right]%2==1) count++;
            while(count>k){
                if(nums[left]%2==1) count--;
                left++;

            }
            ans+=(right-left+1);
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        return atmost(nums,k,n)-atmost(nums,k-1,n);
    }
};
