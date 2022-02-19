class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxi = -1;
        
        for (auto x : nums) {
            m[x]++;
        }
        for (auto x : m) {
            maxi = max(maxi, x.second);
        }
        for (auto x : m) {
            if (x.second == maxi)
                return x.first;
        }
        return 0;
    }
};