class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int ans = 0;
        
        for (auto x : nums) {
            ans += m[x - k] + m[x + k];
            m[x]++;
        }
        return ans;
    }
};