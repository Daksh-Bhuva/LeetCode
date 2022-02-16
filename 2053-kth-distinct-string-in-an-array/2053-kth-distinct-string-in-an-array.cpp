class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        for (auto x : arr) {
            m[x]++;
        }
        int j = 0;

            for (int i = 0; i < arr.size(); i++) {
                if (m[arr[i]] == 1)
                    j++;
                if (j == k)
                    return arr[i];
            }
        
        return "";
    }
};