class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }
        for(auto it:m){
            v.push_back(it.second);
        }
        // if(n==1){
        //     v.push_back(strs);
        // }
        return v;
    }
};
