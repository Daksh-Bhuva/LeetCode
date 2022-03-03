class Solution {
public:
    int minimumSum(int num) {
        string numb = to_string(num);
        sort(numb.begin(), numb.end());
        int num1 = (numb[0] - '0')*10 + (numb[2] - '0');
        int num2 = (numb[1] - '0')*10 + (numb[3] - '0');
        return num1 + num2;
    }
};