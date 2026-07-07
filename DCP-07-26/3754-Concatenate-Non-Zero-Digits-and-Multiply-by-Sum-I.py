class Solution:
    def sumAndMultiply(self, n: int) -> int:
        res = ''
        s = 0
        while n :
            mod = n % 10
            if mod:
                res+=f"{mod}"
                s+=mod
            n //= 10
        
        return int('0'+res[::-1])*s
            