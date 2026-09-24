class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        def sumd(n):
            res = 0
            while n :
                res += n%10
                n//=10
            return res

        for i in range(len(nums))  :
            if i == sumd(nums[i]) :
                return i
        return -1 