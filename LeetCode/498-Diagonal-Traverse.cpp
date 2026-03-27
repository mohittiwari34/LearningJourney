class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int c=0,r=0;
        vector<int>v;
        int dir=1;
        for(int i=0;i<m*n;i++){
            v.push_back(mat[r][c]);
            if(dir==1){
                if(c==m-1) {r++; dir=-1;}
                else if(r==0) {c++; dir=-1;}
                else{r--;c++;}
            }
            else{
                if(r==n-1){c++; dir=1;}
                else if(c==0){r++; dir=1;}
                else{c--;r++;}
            }
        }
        return v;
    }
};
