class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxim = 0;
        for (auto x : accounts) {
            int sum = 0;
            for (auto y : x) {
                sum += y;
            }
            maxim = max(maxim, sum);
        }
        return maxim;
    }
};