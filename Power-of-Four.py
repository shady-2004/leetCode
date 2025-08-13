import math
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n <= 0 :
            return False
        res = math.log(n,4)
        
        return math.isclose(res, round(res), rel_tol=1e-12)