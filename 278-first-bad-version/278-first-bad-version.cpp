// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long start = 0;
        long long end = n - 1;
        while (start <= end) {
            long long mid = (start + end) / 2;
            if (isBadVersion(mid) == true && isBadVersion(mid - 1) == false) {
                return mid;
            }
            else if (isBadVersion(mid) == true) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return start;
    }
};