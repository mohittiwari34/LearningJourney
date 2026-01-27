class Solution {
public:
    int ans=INT_MAX;
    void solve(int idx,vector<int>& cookies,vector<int>&child,int k){
        if(idx==cookies.size()){
            int mz=0;
            for(int i=0;i<k;i++){
                mz=max(child[i],mz);
            }
            ans=min(ans,mz);
            return;
        }
        for(int i=0;i<k;i++){
            child[i]+=cookies[idx];
            solve(idx+1,cookies,child,k);
            child[i]-=cookies[idx];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        
        int n=cookies.size();
        vector<int>child(k,0);
        solve(0,cookies,child,k);
        return ans;
    }
};
