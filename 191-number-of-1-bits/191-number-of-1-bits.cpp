class Solution {
public:
    int hammingWeight(uint32_t n) {
        if (n == 0)
            return 0;
        return hammingWeight(n/2) + n%2;
    }
};