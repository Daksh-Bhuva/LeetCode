class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n > 0) {
            int bit = n % 2;
            if (bit == 1) 
                ans++;
            n /= 2;
        }
        return ans;
    }
};