class Solution {
public:
    vector<int> dp; 

    bool find(int n, vector<int>& nums, int i) {
        if (i >= n) return true;
        if (nums[i] == 0) return false;

        if (dp[i] != -1) return dp[i];

        for (int jump = 1; jump <= nums[i]; jump++) {
            if (find(n, nums, i + jump)) {
                return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n, -1);
        return find(n - 1, nums, 0);
    }
};
