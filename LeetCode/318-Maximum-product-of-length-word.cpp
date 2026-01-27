class Solution {
public:
    

    int maxProduct(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        vector<int>m(n,0);

        for(int i=0;i<n;i++){
            for(char c:words[i]){
                m[i] |=(1<<(c-'a'));
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if((m[i]&m[j])==0) {
                    ans = max(ans,
                        (int)words[i].size() * (int)words[j].size());
                }
            }
        }
        return ans;
    }
};
