class Solution {
public:
    
    void recur (vector<vector<char>>& grid, vector<vector<bool>>& vis, int x, int y, int m, int n) {
        if (x < 0 or x > m-1 or y < 0 or y > n-1)
            return;
        if (vis[x][y] or grid[x][y] == '0')
            return;
        vis[x][y] = true;
        recur(grid, vis, x+1, y, m, n);
        recur(grid, vis, x, y+1, m, n);
        recur(grid, vis, x-1, y, m, n);
        recur(grid, vis, x, y-1, m, n);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool> (n));
        int ans = 0;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' and !vis[i][j]) {
                    recur(grid, vis, i, j, m, n);
                    ans += 1;
                }
            }
        }
        return ans;
    }
};