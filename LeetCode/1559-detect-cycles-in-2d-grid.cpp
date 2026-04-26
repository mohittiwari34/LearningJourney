class Solution {
public:
    int m, n;
    
    bool dfs(int x, int y, int px, int py, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        vis[x][y] = 1;
        
        int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
        
        for (auto &d : dirs) {
            int nx = x + d[0];
            int ny = y + d[1];
            
            if (nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny] == grid[x][y]) {
                
                // Skip the parent cell
                if (nx == px && ny == py) continue;
                
                // If already visited → cycle found
                if (vis[nx][ny]) return true;
                
                if (dfs(nx, ny, x, y, grid, vis)) return true;
            }
        }
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        vector<vector<int>> vis(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j]) {
                    if (dfs(i, j, -1, -1, grid, vis)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
