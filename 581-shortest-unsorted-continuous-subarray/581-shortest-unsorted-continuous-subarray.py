class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        first, last = -1, -1
        maxi, mini = -1, -1
        for i in range(0, n):
            
            if first != -1:
                if nums[i] < maxi:
                    last = i
                maxi = max(maxi, nums[i])
                mini = min(mini, nums[i])
                continue
            
            if i > 0 and nums[i] < nums[i-1]:
                first = i - 1
                last = i
                maxi = nums[i - 1]
                mini = nums[i]
                
        if first == -1:
            return 0
        
        ind = first - 1
        for i in range(ind, -1, -1):
            if nums[i] > mini:
                first = i
        
        return last - first + 1