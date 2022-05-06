class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char> st;
        stack<int> ct;
        for (auto x: s) {
            if(st.empty() or st.top() != x) {
                st.push(x);
                ct.push(1);
            }
            else {
                ct.top() += 1;
                if(ct.top() == k) {
                    st.pop();
                    ct.pop();
                }
            }
        }
        s = "";
        while(!st.empty()) {
            for(int i = 0; i < ct.top(); i++) {
                s += st.top();
            }
            st.pop();
            ct.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};