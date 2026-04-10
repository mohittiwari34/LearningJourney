class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> m;

        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }

        int ans = INT_MAX;
        bool found = false;

        for(auto &it : m) {
            auto &v = it.second;

            if(v.size() >= 3) {
                found = true;

                for(int i = 0; i <= v.size() - 3; i++) {
                    int dist = 2 * (v[i+2] - v[i]);
                    ans = min(ans, dist);
                }
            }
        }

        return found ? ans : -1;
    }
};
