class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        bool zero = false;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero = true;
            }
            if (nums[i] != 0) {
                nums[start] = nums[i];
                if(zero) {
                    nums[i] = 0;
                }
                start++;
            }
        }
    }
};