class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis;
        
        for (int i = 0; i < n; i++) {
            int index = lower_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
            if (index >= lis.size()) {
                lis.push_back(nums[i]);
            }
            else {
                lis[index] = nums[i];
            }
        }
        return lis.size();
    }
};