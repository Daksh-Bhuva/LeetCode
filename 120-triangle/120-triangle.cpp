class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int ans = 1e9;
        if (t.size() == 1) 
            return t[0][0];
        for (int i = 1; i < t.size(); i++) {
            t[i][0] += t[i - 1][0];
            for (int j = 1; j < t[i].size() - 1; j++) {
                t[i][j] += min(t[i - 1][j], t[i - 1][j - 1]);
                if (i == t.size() - 1) {
                    ans = min(ans, t[i][j]);
                }
            }
            t[i].back() += t[i-1].back();
            if (i == t.size() -1)
                ans = min(ans, min(t[i][0], t[i].back()));
        }
        return ans;
    }
};