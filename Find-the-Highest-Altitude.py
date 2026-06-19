1class Solution:
2    def largestAltitude(self, gain: List[int]) -> int:
3        res = 0
4        acc = 0 
5        for g in gain :
6            acc += g
7            res = max(res,acc)
8        return res