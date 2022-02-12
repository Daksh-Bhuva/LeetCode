class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> small(26,0), big(26,0);
        int ans = 0;
        for (int i = 0; i < jewels.length(); i++) {
            if(jewels[i] - 'a' >= 0 and jewels[i] - 'a' < 26)
                small[jewels[i] - 'a']++;
            else
                big[jewels[i] - 'A']++;
        }
        for (int i = 0; i < stones.length(); i++) {
            if (stones[i] - 'a' >= 0 and stones[i] - 'a'< 26 ) 
                small[stones[i]  - 'a'] == 1 ? ans++ : ans += 0;
            else 
                big[stones[i] - 'A'] == 1 ? ans++ : ans += 0;
        }
        return ans;
    }
};