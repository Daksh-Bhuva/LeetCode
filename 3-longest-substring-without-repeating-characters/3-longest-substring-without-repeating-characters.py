class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans, startInd = 0, 0
        mp = {}
        for i in range(len(s)):
            
            if (s[i] not in mp or mp[s[i]] < startInd):
                mp[s[i]] = i
                ans = max(ans, i - startInd + 1)
                
            else:
                startInd = mp[s[i]] + 1
                mp[s[i]] = i
                ans = max(ans, i - startInd + 1)
                
        return ans