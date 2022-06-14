class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        if (s.length() == 0)
            return 0;
        
        m[s[0]] = 1;
        int start = 0;
        int ans = 1;
        for (int i = 1; i < s.length(); i++) {
            if (m[s[i]] != 0) {
                if (start < m[s[i]]) {
                    start = m[s[i]];
                }
            }
            m[s[i]] = i + 1;
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};