class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string, long long> mp;

        for (auto &w : words) {
            string key = "";
            for (int i = 1; i < w.size(); i++) {
                int diff = (w[i] - w[i-1] + 26) % 26;
                key += to_string(diff) + "#";
            }
            mp[key]++;
        }

        long long ans = 0;
        for (auto &it : mp) {
            long long c = it.second;
            ans += c * (c - 1) / 2;   
        }
        return ans;
    }
};
