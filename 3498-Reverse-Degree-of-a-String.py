class Solution:
    def reverseDegree(self, s: str) -> int:
        res = 0
        a = ord('a')
        for i in range(len(s)) : 
            res += (i+1) * (26 - (ord(s[i]) - a ))
        return res