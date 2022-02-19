class Solution {
public:
    string removeVowels(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
                continue;
            else
                ans += s[i];
        }
        return ans;
    }
};