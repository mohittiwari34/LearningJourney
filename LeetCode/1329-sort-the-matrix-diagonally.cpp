class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int u=mat[0].size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<u;j++){
                m[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &it:m){
            sort(it.second.rbegin(),it.second.rend());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<u;j++){
                mat[i][j]=m[i-j].back();
                m[i-j].pop_back();
            }
        }
        return mat;
    }
};
