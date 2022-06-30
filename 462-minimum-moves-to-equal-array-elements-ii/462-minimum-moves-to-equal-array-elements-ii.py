class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        ans = 0
        index = len(nums) // 2
        for i in range(len(nums)):
            if i != index:
                ans = ans + abs(nums[index] - nums[i])
        
        return ans
        