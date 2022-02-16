class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        for (auto x : arr) {
            m[x]++;
        }
        
        int counter = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (m[arr[i]] == 1)
                counter++;
            if (counter == k)
                return arr[i];
        }
        return "";
    }
};