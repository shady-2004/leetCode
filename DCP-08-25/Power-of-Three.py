import math
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0 :
            return False
        res = math.log(n,3)
        
        return math.isclose(res, round(res), rel_tol=1e-12)