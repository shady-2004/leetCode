class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n = len(nums)
        score = [0 for _ in range(n)]
        MAX = nums[0]
        MIN = nums[n-1]
        res = -1 
        for i in range(n) : 
            MAX = max(MAX,nums[i])
            score[i] = MAX

        for i in range(n-1,-1,-1) : 
            MIN = min(MIN,nums[i])
            if score[i] - MIN <= k  :
                res = i
        return res
                
        
