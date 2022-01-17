class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        set<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
        }
        for (auto x : m) {
            ans.insert(x.second);
        }
        if (ans.size() == m.size()){
            return true;
        }
        return false;
    }
};