class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    bool check(int i,int j,int n,int m){
        return i>-1&&i<n&&j>-1&&j<m;
    }
    void DFS(int i,int j,int n,int m,vector<vector<int>>& matrix,vector<vector<int>>&path){
        path[i][j]=1;
        for(int k=0;k<4;k++){
            if(check(i+row[k],j+col[k],n,m)&&matrix[i][j]<matrix[i+row[k]][j+col[k]]){
                if(path[i+row[k]][j+col[k]]==0){
                    DFS(i+row[k],j+col[k],n,m,matrix,path);
                    
                }
                path[i][j]=max(path[i][j],1+path[i+row[k]][j+col[k]]);
            }
        }
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int total=0;
        vector<vector<int>>path(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(path[i][j]==0){
                    DFS(i,j,n,m,matrix,path);
                    total=max(total,path[i][j]);
                }
            }
        }
        return total;

    }
};
