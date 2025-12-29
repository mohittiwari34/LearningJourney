class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size=0;
        int mid,end,start;
        int index;
        int n=nums.size();
        vector<int>LIS(n);
        LIS[0]=nums[0];
        for(int i=1;i<n;i++){
            start=0;end=size;
            index=size+1;
            while(start<=end){
                mid=start+(end-start)/2;
                if(LIS[mid]<nums[i]){
                    start=mid+1;
                }
                else if(LIS[mid]==nums[i]){
                    index=mid;
                    break;
                }
                else{
                    index=mid;
                    end=mid-1;
                }
                // LIS[index]=nums[i];
                // size=max(size,index);
            }
            LIS[index]=nums[i];
                size=max(size,index);
        }
        return size+1;
    }
};
