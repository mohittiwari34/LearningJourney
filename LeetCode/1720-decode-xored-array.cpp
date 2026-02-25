class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size()+1;
        vector<int>v(n);
        v[0]=first;
        for(int i=1;i<n;i++){
            v[i]=encoded[i-1]^v[i-1];
        }
        return v;

        
    }
};
