class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp (strs.size() + 1, vector<vector<int>> (m + 1, vector<int> (n + 1)));
        
        for (int i = 1; i <= strs.size(); i++) {
            for (int j = 0; j <= m; j++) {
                for (int k = 0; k <= n; k++) {
                    string currStr = strs[i-1];
                    int cz = 0, co = 0;
                    for(char c : currStr) {
                        if(c == '0')
                            cz++;
                        else
                            co++;
                    }
                    if (cz <= j and co <= k)
                        dp[i][j][k] = max(dp[i-1][j][k], dp[i-1][j - cz][k - co] + 1);
                    else 
                        dp[i][j][k] = dp[i-1][j][k];
                }
            }
        }
        // for(auto x : dp) {
        //     for(auto y : x) {
        //         for(auto z : y) {
        //             cout<<z<<" ";
        //         }
        //         cout<<endl;
        //     }
        //     cout<<endl;
        // }
        return dp[strs.size()][m][n];
    }
};