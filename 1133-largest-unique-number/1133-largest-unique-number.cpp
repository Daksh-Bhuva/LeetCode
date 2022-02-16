class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        sort(nums.begin(), nums.end());
        
        for (auto x : nums) {
            m[x]++;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (m[nums[i]] == 1) {
                return nums[i];
                break;
            }
        }
        return -1;
    }
};