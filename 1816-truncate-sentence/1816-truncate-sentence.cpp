class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v;
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                v.push_back(temp);
                temp = "";
            }
            else
                temp += s[i];
        }
        v.push_back(temp);
        string ans = v[0];
        for (int i = 1; i < k; i++) {
            ans = ans + ' ' + v[i];
        }
        return ans;
    }
};