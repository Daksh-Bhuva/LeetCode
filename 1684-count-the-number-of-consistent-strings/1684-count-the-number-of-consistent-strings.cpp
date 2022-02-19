class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> m;
        int count = 0;
        for (int i = 0; i < allowed.length(); i++) {
            m[allowed[i]]++;
        }
        for (int i = 0; i < words.size(); i++) {
            int j = 0;
            while (j < words[i].length()) {
                if (m[words[i][j]] == 0)
                    break;
                else if (j == words[i].length() - 1)
                    count++;
                j++;
            }
        }
        return count;
    }
};