class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(2*n);
        int ind = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0 and (ind + 1) < n) {
                v[ind++] = 0;
                v[ind++] = 0;
            }
            else {
                v[ind++] = arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i] = v[i];
        }
    }
};