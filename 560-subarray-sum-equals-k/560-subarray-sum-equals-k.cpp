class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, ans = 0;
        unordered_map<int,int> m;
        
        for (auto num : nums) {
            sum += num;
            if (sum == k)
                ans++;
            ans += m[sum - k];
            m[sum]++;
        }
        return ans;
    }
};