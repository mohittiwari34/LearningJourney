#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        int needed = 1 << k;  // 2^k
        
        if (n - k + 1 < needed)
            return false;
        
        unordered_map<string, int> mp;
        
        for (int i = 0; i + k <= n; i++) {
            string sub = s.substr(i, k);
            mp[sub]++;  // count frequency
        }
        
        return mp.size() == needed;
    }
};
