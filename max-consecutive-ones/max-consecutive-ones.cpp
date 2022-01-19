class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                counter++;
                v.push_back(counter);
            }
            else {
                v.push_back(counter);
                counter = 0;
            }
        }
        return *max_element(v.begin(), v.end());
    }
};