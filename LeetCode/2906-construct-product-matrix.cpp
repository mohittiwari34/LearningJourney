class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int mod = 12345;
        
        vector<int> arr;
        for(auto &row : grid)
            for(auto x : row)
                arr.push_back(x % mod);

        int size = arr.size();
        vector<int> pre(size, 1), suf(size, 1);

        for(int i = 1; i < size; i++)
            pre[i] = (pre[i-1] * arr[i-1]) % mod;

        for(int i = size-2; i >= 0; i--)
            suf[i] = (suf[i+1] * arr[i+1]) % mod;

        int k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                grid[i][j] = (pre[k] * suf[k]) % mod;
                k++;
            }
        }

        return grid;
        
    }
};
