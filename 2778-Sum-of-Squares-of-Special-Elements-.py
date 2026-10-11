class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        res = 0
        n = len(nums)
        for i in range(n) :
            if n % (i+1) == 0 :
                res += nums[i]*nums[i]
        
        return res