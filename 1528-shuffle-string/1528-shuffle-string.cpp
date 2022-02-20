class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            m[indices[i]] = s[i];
        }
        for (auto x : m) {
            ans += x.second;
        }
        return ans;
    }
};