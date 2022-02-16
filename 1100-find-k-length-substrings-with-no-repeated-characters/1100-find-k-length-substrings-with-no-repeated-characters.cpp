class Solution {
public:
    bool check (unordered_map<char, int> &m) {
        for (auto x : m) {
            if (x.second > 1)
                return false;
        }
        return true;
    }
    
    int numKLenSubstrNoRepeats(string s, int k) {
        unordered_map<char, int> m;
        int ans = 0;
        
        if (s.length() < k)
            return 0;
        for (int i = 0; i < k; i++) {
            m[s[i]]++;
        }
        if (check(m))
            ans++;
        for (int i = 1; i < s.length() - k + 1; i++) {
            m[s[i - 1]]--;
            m[s[i + k - 1]]++;
            if (check(m))
                ans++;
        }
        return ans;
    }
};