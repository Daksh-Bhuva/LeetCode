class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        sort(items.rbegin(), items.rend());
        vector<vector<int>> ans;
        for (int i = 0; i < items.size(); i++) {
            int avg = 0;
            vector<int> pair;
            pair.push_back(items[i][0]);
            for (int j = i; j < i + 5; j++) {
                avg += items[j][1];
            }
            avg /= 5;
            pair.push_back(avg);
            ans.push_back(pair);
            while (i < items.size() - 1 and items[i][0] == items[i+1][0])
                i++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};