class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;
        for (int i = 2; i < nums.size(); i++) {
            int diff = nums[i] - nums[i - 1];
            int j = i - 1;
            while (j > 0 and nums[j] - nums[j - 1] == diff) {
                ans++;
                j--;
            }
        }
        return ans;
    }
};