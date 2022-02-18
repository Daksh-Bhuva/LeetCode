class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 1, ans = -1;
        for (int i = 0; i < sentences.size(); i++) {
            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ')
                    count++;
            }
            ans = max(ans, count);
            count = 1;
        }
        return ans;
    }
};