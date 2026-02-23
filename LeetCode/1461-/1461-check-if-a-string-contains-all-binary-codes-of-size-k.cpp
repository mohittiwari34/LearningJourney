class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        int needed=1<<k;
        if(n-k+1<needed){
            return false;
        }
        unordered_map<string,int>m;
        for(int i=0;i+k<=n;i++){
            string a=s.substr(i,k);
            m[a]++;
        }
        if(m.size()==needed) return true;
        return false;
        
    }
};
