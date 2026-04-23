class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]].push_back(i);
        }

        vector<long long> res(n, 0);

        for(auto &p : m){
            vector<int> &v = p.second;
            int k = v.size();

            vector<long long> prefix(k, 0);
            prefix[0] = v[0];

            for(int i = 1; i < k; i++){
                prefix[i] = prefix[i-1] + v[i];
            }

            for(int i = 0; i < k; i++){
                int idx = v[i];

                long long left = (long long)v[i]*i - (i > 0 ? prefix[i-1] : 0);
                long long right = (prefix[k-1] - prefix[i]) - (long long)v[i]*(k-i-1);

                res[idx] = left + right;
            }
        }
        return res;
    }
};
