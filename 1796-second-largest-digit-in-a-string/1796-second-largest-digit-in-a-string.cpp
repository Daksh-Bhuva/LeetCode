class Solution {
public:
    int secondHighest(string s) {
        int maxi = -1, maxi2 = -1;
        
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] - 'a' < 0) or (s[i] - 'a' > 25)) {
                maxi = max(maxi,s[i] - '0');
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] - 'a' < 0) or (s[i] - 'a' > 25)) {
                if (maxi != s[i] - '0')
                    maxi2 = max(maxi2,s[i] - '0');
            }
        }
        return maxi2;
    }
};