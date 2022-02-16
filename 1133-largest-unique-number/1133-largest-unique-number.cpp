class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        vector<int> v(2000);
        sort(nums.begin(), nums.end());
        
        for (auto x : nums) {
            v[x]++;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (v[nums[i]] == 1) {
                return nums[i];
                break;
            }
        }
        return -1;
    }
};