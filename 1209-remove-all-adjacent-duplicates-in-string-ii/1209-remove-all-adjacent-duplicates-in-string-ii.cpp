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
                st.push(x);
                ct.push(ct.top() + 1);
                if(ct.top() == k) {
                    int t = k;
                    while(t--) {
                        ct.pop();
                        st.pop();
                    }
                }
            }
        }
        s = "";
        while(!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};