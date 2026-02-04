class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int right=0;
        int left=0;
        int n=arr.size();
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum/k>=threshold){
            count++;
        }
        for(right=k;right<n;right++){
            sum+=arr[right];
            sum-=arr[left];
            if(sum/k>=threshold){
                count++;
            }
            left++;
        }
        return count;
        
    }
};
