class Solution {
public:
    int climbStairs(int n) {

        int N1 = 1;
        int N2 = 2;
        int nextTerm;
        
        if (n <= 2) {
            return n;
        }
        
        for (int i = 2; i < n; i++) {
            nextTerm = N1 + N2;
            N1 = N2;
            N2 = nextTerm;
        }
        return N2;
    }
};