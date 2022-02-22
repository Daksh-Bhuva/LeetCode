class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int number = NULL;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0)
                number = nums[i];
            count += (nums[i] == number) ? 1 : -1;
        }
        return number;
    }
};