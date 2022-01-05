class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minim = INT_MAX;
        int ans = 0;
        for (int i = 0; i < prices.size(); i++) {
            minim = min(minim, prices[i]);
            ans = max(ans, prices[i] - minim);
        }
        return ans;
    }
};