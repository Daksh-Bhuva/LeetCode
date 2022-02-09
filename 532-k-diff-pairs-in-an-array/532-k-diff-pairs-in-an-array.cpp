class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0, next = 0;

        for (int i = 0; i < nums.size(); i++) {
            next = max(i + 1, next);
            while (next < nums.size() and nums[i] + k > nums[next])
                next++;
            if (next == nums.size())
                return ans;
            if (nums[next] == nums[i] + k)
                ans++;
            while (i < nums.size() - 1 and nums[i + 1] == nums[i])
                i++;
        }
        return ans;
    }
};