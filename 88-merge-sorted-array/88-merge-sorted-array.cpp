class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = m - 1;
        int n2 = n - 1;
        int a = m + n - 1;
        while (n1 >= 0 and n2 >= 0) {
            if (nums1[n1] > nums2[n2]) {
                nums1[a] = nums1[n1];
                n1--;
                a--;
            }
            else {
                nums1[a] = nums2[n2];
                n2--;
                a--;
            }
        }
        while (n1 >= 0) {
            nums1[a--] = nums1[n1--];
        }
        while (n2 >= 0) {
            nums1[a--] = nums2[n2--];
        }
    }
};