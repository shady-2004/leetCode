class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        occs = []
        cur = 0
        for num in nums :
            if num == 0:
                cur += 1
            else :
                if cur > 0:
                    occs.append(cur)
                    cur = 0
        if cur > 0 :
            occs.append(cur)

        res = 0
        print(occs)
        for i in occs :
            res += i*(i+1) / 2
        return int(res)