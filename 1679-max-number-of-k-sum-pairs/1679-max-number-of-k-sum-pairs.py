class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        mp = {}
        for i in nums:
            mp[i] = 1 if i not in mp else mp[i] + 1
        
        ans = 0
        
        for key in mp.keys():
            if k - key == key:
                ans += mp[key] // 2
                mp[key] = 0
                
            if k - key in mp:
                ans += min(mp[key], mp[k - key])
                mp[key] = 0
        
        return ans