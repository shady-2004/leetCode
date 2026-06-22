1class Solution:
2    MAX = 2**31 - 1 
3    MIN = -2**31
4    def divide(self, dividend: int, divisor: int) -> int:
5        if dividend == 0 : return 0
6        res = dividend / divisor
7        sign = res / abs(res)
8        res = int(math.floor(abs(res))*sign)
9        return min(self.MAX , max(self.MIN,res))