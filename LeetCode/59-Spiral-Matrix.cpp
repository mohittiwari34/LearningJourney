class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int num=1;
        while(top<=bottom &&left<=right){
            for(int i=left;i<=right;i++){
                v[top][i]=num++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                v[i][right]=num++;
            }
            right--;
            for(int i=right;i>=left;i--){
                v[bottom][i]=num++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                v[i][left]=num++;
            }
            left++;
        }
        return v;
        
    }
};
