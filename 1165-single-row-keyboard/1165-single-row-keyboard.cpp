class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char, int> m;
        int ans = 0;
        
        for (int i = 0; i < keyboard.length(); i++) {
            m[keyboard[i]] = i;
        }
        
        ans = m[word[0]];
        for (int i = 1; i < word.length(); i++) {
            ans += abs(m[word[i]] - m[word[i - 1]]);
        }
        return ans;
    }
};