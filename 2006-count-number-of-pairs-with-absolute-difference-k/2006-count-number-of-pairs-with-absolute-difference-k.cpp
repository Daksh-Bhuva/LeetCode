class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        //unordered_map<int,int> m;
        int ans = 0;
        vector<int> count(101);
        
        for (auto x : nums) {
            if (x >= k) {
                ans += count[x - k];
            }
            if (x + k <= 100) {
                ans += count[x + k];
            }
            count[x]++;
        }
        return ans;
    }
};