class Solution {
public:
    int secondHighest(string s) {
        vector<int> v;
        
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] - 'a' < 0) or (s[i] - 'a' > 25)) {
                v.push_back(s[i] - '0');
            }
        }
        sort(v.begin(), v.end());
        int count = 0;
        for (int i = v.size() - 1; i >= 0; i--) {
            while (i > 0 and v[i] == v[i - 1]) {
                i--;
            }
            count++;
            if (count ==  2)
                return v[i];
        }
        return -1;
    }
};