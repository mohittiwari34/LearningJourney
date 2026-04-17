class Solution {
public:
    int reverseNum(int x) {
        int rev = 0;
        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (m.count(nums[i])) {
                ans = min(ans, i - m[nums[i]]);
            }

            int rev = reverseNum(nums[i]);

            // 🔥 ALWAYS update to latest index
            m[rev] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
