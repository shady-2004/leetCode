class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        res = [0 for _ in range(len(nums))]
        MAX = nums[0]
        MIN = nums[len(nums)-1]
        for i in range(len(nums)) : 
            MAX = max(MAX,nums[i])
            res[i] = MAX

        c = -1

        for i in range(len(nums)-1,-1, -1) : 
            MIN = min(MIN,nums[i])
            res[i] -= MIN    
            if res[i] <= k :
                c = i
        return c