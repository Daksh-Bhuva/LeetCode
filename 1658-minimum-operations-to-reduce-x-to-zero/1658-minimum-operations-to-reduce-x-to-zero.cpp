class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int ans = n;
        vector<int> rnums (n);
        rnums[n - 1] = nums[n - 1];
        for (int i = nums.size() - 2; i > 0; i--) {
            rnums[i] += rnums[i + 1] + nums[i];
        }
        for (int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }
        
        if (nums[n - 1] < x)
            return -1;
        
        int ind = n;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= x) {
                nums[i] == x ? ans = i + 1 : ans = ans;
                ind = i - 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (rnums[i] >= x) {
                rnums[i] == x ? ans = min(ans, n - i) : ans = ans;
                break;
            }
        }
        int end = n - 1;
        for (int i = ind; i >= 0; i--) {
            while (end > i and nums[i] + rnums[end] <= x) {
                end--;
            }
            if (end < n - 1 and nums[i] + rnums[end + 1] == x)
                ans = min(ans, i + n - end);
        }
        return ans == n ? nums[n - 1] == x ? ans : -1 : ans; 
    }
};