class Solution {
public:
    bool check(char &c) {
        vector<char> v{'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        for (auto x : v) {
            if (x == c)
                return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        vector<char> v{'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        int count1 = 0, count2 = 0;
        for (int i = 0; i < s.length() / 2; i++) {
            if (check(s[i]))
                count1++;
        }
        for (int i = s.length() / 2; i < s.length(); i++) {
            if (check(s[i]))
                count2++;
        }
        if (count1 == count2)
            return true;
        else
            return false;
    }
};