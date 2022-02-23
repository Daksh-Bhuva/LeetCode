class Solution {
public:
    bool check(string &word) {
        for (int i = 0; i < word.length() / 2; i++) {
            if (word[i] != word[word.length() - i - 1])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for (auto x : words) {
            if (check(x))
                return x;
        }
        return "";
    }
};