class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp (m + 1, vector<int> (n + 1));
        
        for (int i = 1; i <= strs.size(); i++) {
            for (int j = m; j >= 0; j--) {
                for (int k = n; k >= 0; k--) {
                    string currStr = strs[i-1];
                    int cz = 0, co = 0;
                    for(char c : currStr) {
                        if(c == '0')
                            cz++;
                        else
                            co++;
                    }
                    if (cz <= j and co <= k)
                        dp[j][k] = max(dp[j][k], dp[j - cz][k - co] + 1);
                    else 
                        dp[j][k] = dp[j][k];
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
        return dp[m][n];
    }
};