class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "";
        int count = 0, i = 0;
        while (i < indices.size()) {
            if (indices[i] == count) {
                ans += s[i];
                i = 0;
                count++;
            }
            else {
                i++;
            }
       }
        return ans;
    }
};