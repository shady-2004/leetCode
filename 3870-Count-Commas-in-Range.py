class Solution:
    def countCommas(self, n: int) -> int:
        base = 1000
        num = 0
        while n >= base :
            if n // base >= 10 :
                num += base*9 
            else :
                num += n - base  + 1 
            
            base *= 10
        
        return num