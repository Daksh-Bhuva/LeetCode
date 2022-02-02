class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if ((coordinates[0] == 'a' or coordinates[0] == 'c' or coordinates[0] == 'e' or coordinates[0] == 'g') and (coordinates[1] % 2 == 1)) {
            return false;
        }
        if ((coordinates[0] == 'b' or coordinates[0] == 'd' or coordinates[0] == 'f' or coordinates[0] == 'h') and (coordinates[1] % 2 == 0)) {
            return false;
        }
        return true;
    }
};