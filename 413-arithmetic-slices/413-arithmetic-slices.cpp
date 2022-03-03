class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if (nums.size() < 2) 
            return 0;
        int ans = 0, count = 1, prevDiff = nums[1] - nums[0];
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] == prevDiff) 
                ans += count++;
            else {
                prevDiff = nums[i] - nums[i - 1];
                count = 1;
            }
        }
        return ans;
    }
};