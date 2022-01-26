class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        while (i + 1 < arr.size() and arr[i] < arr[i+1]) {
            i++;
        }
        if (i == 0 or i == arr.size() - 1) {
            return false;
        }
        while (i + 1 < arr.size() and arr[i] > arr[i+1]) {
            i++;
        }
        return i == arr.size() - 1;
    }
};