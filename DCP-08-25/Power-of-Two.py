class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        cnt = 0 
        if n == 0 :
            return False
        x = 1
        for i in range(64) :
            if n & x == x:
                cnt +=1
            if cnt > 1 :
                return False
            x *= 2 
        return True