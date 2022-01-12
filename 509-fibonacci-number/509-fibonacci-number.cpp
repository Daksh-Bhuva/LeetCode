class Solution {
public:
    int fib(int n) {
        int F0 = 0;
        int F1 = 1;
        int nextTerm;
        
        if (n == 0) {
            return 0;
        }
        
        for (int i = 1; i < n; i++) {
            nextTerm = F0 + F1;
            F0 = F1;
            F1 = nextTerm;
        }
        return F1;
    }
};