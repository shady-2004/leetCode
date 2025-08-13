import math
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0 :
            return False
        cur = n
        while cur > 1 :
            cur/=3
            if int(cur) != cur :
                return False
        return True