class Solution {
public:
    int minDeletions(string s) {
        vector<int> count(26);
        for(auto x : s) {
            count[x - 'a']++;
        }
        // sort(count.begin(),count.end());
        set<int> st;
        int moves = 0;
        for(auto x : count) {
            if(x > 0) {
                int ct = x;
                while(ct > 0 and st.count(ct) == 1) {
                    ct--;
                    moves++;
                }
                st.insert(ct);
            }
        }
        return moves;
    }
};