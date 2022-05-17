class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<vector<int>> vis(n, vector<int> (n));
        vector<vector<bool>> filled(n, vector<bool> (n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                vis[i][j] = 1e6;
            }
        }
        priority_queue<pair<int,pair<int,int>>> q;
        if(grid[0][0] == 1) {
            return -1;
        }
        q.push(make_pair(-1,make_pair(0,0)));
        vis[0][0] = 1;
        while(!q.empty()) {
            
            auto top = q.top();
            q.pop();
            
            if(filled[top.second.first][top.second.second])
                continue;
            
            filled[top.second.first][top.second.second] = true;
            int x = top.second.first, y = top.second.second;
            for(int i = -1; i < 2; i++) {
                for(int j = -1; j < 2; j++) {
                    if(x + i < 0 or x + i > n - 1 or y + j < 0 or y + j > n - 1 or (i == 0 and j == 0)) {
                        continue;
                    }
                    if(grid[x + i][y + j] == 0 and -top.first + 1 < vis[x + i][y + j]) {
                        
                        vis[x + i][y + j] = -top.first + 1;
                        q.push(make_pair(-vis[x + i][y + j],make_pair(x + i, y + j)));
                    }
                }
            }
        }
        if(vis[n-1][n-1] == 1e6) {
            return -1;
        }
        return vis[n - 1][n - 1];
    }
};