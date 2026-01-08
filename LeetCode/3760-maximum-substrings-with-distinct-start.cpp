class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        cout<<m.size();
        return m.size();;
    }
};
