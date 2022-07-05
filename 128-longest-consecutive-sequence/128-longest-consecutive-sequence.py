class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        Set = set(nums)
        ans = 0
        
        for num in Set:
            if num - 1 not in Set:
                currNum = num
                currLen = 1
                
                while currNum + 1 in Set:
                    currNum += 1
                    currLen += 1
                    
                ans = max(ans, currLen)
        
        return ans