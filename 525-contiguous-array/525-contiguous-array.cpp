class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int cZero = 0, cOne = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) 
                cZero++;
            else 
                cOne++;
            
            int diff = cZero - cOne;
            
            if (diff == 0) 
                ans = max(ans, i + 1);
            
            if (m[diff] == 0) 
                m[diff] = i + 1;
            else 
                ans = max(ans, i - m[diff] + 1);
        }
        return ans;
    }
};