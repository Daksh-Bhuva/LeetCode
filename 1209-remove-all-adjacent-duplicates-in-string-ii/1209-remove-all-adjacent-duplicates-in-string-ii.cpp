class Solution {
public:
    string removeDuplicates(string str, int k) {
        stack<pair<char,int>> s;
        for(auto x : str) {
            if(s.empty()) {
                s.push(make_pair(x,1));
            }
            else {
                if(s.top().first == x) {
                    s.push(make_pair(x,s.top().second + 1));
                }
                else {
                    s.push(make_pair(x,1));
                }
                if(s.top().second == k) {
                    int ct = k;
                    while(ct--) {
                        s.pop();
                    }
                }
            }
        }
        string ans = "";
        while(!s.empty()) {
            ans += s.top().first;
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};