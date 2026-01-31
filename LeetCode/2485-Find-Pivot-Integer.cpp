class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        vector<pair<int,int>>v(n+1);
        v[1]={1,1};
        for(int i=2;i<=n;i++){
            v[i].first=i;
            v[i].second=i+v[i-1].second;
        }
        int l=v[n].second;
        for(int i=1;i<=n;i++){
            int m=l-v[i].second+v[i].first;
            if(v[i].second==m) return v[i].first;
        }
        return -1;
    }
};
