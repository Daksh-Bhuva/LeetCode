class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);
        for (char c : s) {
            v[c - 'a']++;
        }
        int ans = 0;
        unordered_set<int> st;
        for (int i = 0; i < 26; i++) {
            while(v[i] > 0) {
                if (st.count(v[i])) {
                    v[i]--;
                    ans++;
                }
                else {
                    st.insert(v[i]);
                    break;
                }
            }
        }
        return ans;
    }
};