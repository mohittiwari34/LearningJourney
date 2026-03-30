class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int k=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            k+=mat[i][i];
        }
        
        int a=0;
        int b=n-1;
        for(int i=0;i<n;i++){

            if(a==b) {
                a++;
                b--;
                continue;
            }
            k+=mat[a][b];
            a++;
            b--;
        }
        return k;

        
    }
};
