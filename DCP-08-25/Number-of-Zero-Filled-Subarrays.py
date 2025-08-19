class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        cur = 0
        res = 0
        for num in nums :
            if num == 0:
                cur += 1
            elif  cur > 0 :
                res += cur*(cur+1)/2
                cur = 0

        if cur > 0 :
            res += cur*(cur+1)/2
        return int(res)