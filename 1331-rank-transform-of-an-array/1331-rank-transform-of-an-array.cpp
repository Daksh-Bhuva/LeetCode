class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, vector<int>> m;
        int rank = 1;
        
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]].push_back(i);
        }
        for (auto x : m) {
            for (auto y : x.second) {
                arr[y] = rank;
            }
            rank++;
        }
        return arr;
    }
};