class Solution:
    def canJump(self, nums: List[int]) -> bool:
        maxCanReach = nums[0]
        for i in range(0, len(nums)):
            maxCanReach = max(nums[i]+i, maxCanReach)
            if (maxCanReach >= len(nums) - 1):
                return True
            if (maxCanReach == i):
                return False

            
        return True
        
        