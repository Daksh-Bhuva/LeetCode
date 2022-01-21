class Solution {
public:
    int tribonacci(int n) {
        int T0 = 0;
        int T1 = 1;
        int T2 = 1;
        int nextTerm = 0;
        
        if (n == 0) {
            return T0;
        }
        
        for (int i = 3; i <= n; i++) {
            nextTerm = T0 + T1 + T2;
            T0 = T1;
            T1 = T2;
            T2 = nextTerm;
        }
        return T2;
    }
};