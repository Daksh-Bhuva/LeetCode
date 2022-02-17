class Solution {
public:
    int secondHighest(string s) {
        int maxi = -1, maxi2 = -1;
        vector<int> v;
        
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] - 'a' < 0) or (s[i] - 'a' > 25)) {
                maxi = max(maxi,s[i] - '0');
                v.push_back(s[i] - '0');
            }
        }
        for (int i = 0; i < v.size(); i++) {
            if (maxi != v[i]) {
                maxi2 = max(maxi2, v[i]);
            }
        }
        return maxi2;
    }
};