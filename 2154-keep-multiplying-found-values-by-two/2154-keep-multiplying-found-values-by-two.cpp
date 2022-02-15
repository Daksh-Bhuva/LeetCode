class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int> m;
        
        for (auto x : nums) {
            m[x]++;
        }
        while (int i = 0 < nums.size()) {
            if (m[original] != 0) {
                original *= 2;
                i++;
            }
            else
                break;
        }
        return original;
    }
};