class Solution {
public:
    string defangIPaddr(string address) {
        string temp = "";
        string ans = "";
        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.')
                temp += "[.]";
            else
                temp += address[i];
        }
        for (int i = 0; i < temp.length(); i++){
            if (temp[i] == ' ')
                continue;
            else
                ans += temp[i];
        }
        return ans;
    }
};