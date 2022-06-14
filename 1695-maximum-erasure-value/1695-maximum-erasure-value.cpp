class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> m;
        if (nums.size() == 1)
            return nums[0];
        
        m[nums[0]] = 1;
        int ans = 0;
        int start = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (m[nums[i]] != 0) {
                int prevIndex = m[nums[i]] - 1;
                if (start <= prevIndex) {
                    start = prevIndex + 1;
                }
            }
            m[nums[i]] = i + 1;
            nums[i] += nums[i-1];
            int temp = start == 0 ? 0 : nums[start - 1];
            ans = max(ans, nums[i] - temp);
        }
        return ans;
    }
};

// 1 2 1 4 2 1 7