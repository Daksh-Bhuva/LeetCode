class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = upper_bound(nums.begin() + i + 1, nums.end(), nums[i] + k) - nums.begin();
            index -= 1;
            if (index != i and nums[index] == nums[i] + k)
                ans++;
            while (i < nums.size() - 1 and nums[i+1] == nums[i])
                i++;
        }
        return ans;
    }
};