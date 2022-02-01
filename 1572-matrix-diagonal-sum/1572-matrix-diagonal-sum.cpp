class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i == j) {
                    sum += mat[i][j];
                }
                if (i != j and i == mat.size() - 1 - j) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};