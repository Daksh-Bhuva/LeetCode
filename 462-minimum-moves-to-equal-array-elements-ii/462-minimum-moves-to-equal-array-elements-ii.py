class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        ans = 0
        for i in range(len(nums)):
            ans = ans + abs(nums[len(nums) // 2] - nums[i])
        
        return ans
        