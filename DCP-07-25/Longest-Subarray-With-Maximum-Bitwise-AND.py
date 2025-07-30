class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        maxA = max(nums)
        lenS = 0
        res = 1
        
        for i in range(len(nums)):
            if nums[i] == maxA :
                lenS += 1
                res = max( res,lenS )
            else :
                lenS = 0
        return res
                 
