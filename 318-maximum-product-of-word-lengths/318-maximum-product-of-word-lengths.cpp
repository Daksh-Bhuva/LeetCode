class Solution {
public:
    bool check(unordered_map<char, int> &m, string &b) {
        for (int i = 0; i < b.length(); i++) {
            if(m[b[i]] > 0)
                return true;
        }
        return false;
    }
    
    int maxProduct(vector<string>& words) {
        int ans = 0;
         for (int i = 0; i < words.size() - 1; i++) {
             unordered_map<char, int> m;
             for (int k = 0; k < words[i].length(); k++) {
                 m[words[i][k]]++;
             }
             for (int j = i + 1; j < words.size(); j++) {
                 if (!check(m, words[j])) {
                     int mul = words[i].length() * words[j].length();
                     ans = max(ans, mul);
                 }
             }
         }
        return ans;
    }
};