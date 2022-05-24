class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                if ((s[i] == ')' and top == '(') or (s[i] == '}' and top == '{') or (s[i] == ']' and top == '[')) {
                    st.pop();
                    continue;
                }
                else {
                    return false;
                }
            }
        }
        if(st.empty()) {
            return true;
        }
        return false;
    }
};