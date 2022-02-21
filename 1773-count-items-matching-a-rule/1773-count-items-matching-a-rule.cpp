class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        for (int i = 0; i < items.size(); i++) {
            if (ruleKey == "type" and items[i][0] == ruleValue)
                    ans++;
            if (ruleKey == "color" and items[i][1] == ruleValue)
                    ans++;
            if (ruleKey == "name" and items[i][2] == ruleValue)
                    ans++;
        }
        return ans;
    }
};