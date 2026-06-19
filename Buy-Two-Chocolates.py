1class Solution:
2    def buyChoco(self, prices: List[int], money: int) -> int:
3        m1 = 1000000
4        m2 = 1000000
5        for m in prices :
6            if m < m1 :
7                m1 , m2  = m , m1
8            elif m < m2 :
9                m2 = m
10        if m1 + m2 <= money :
11            return money -m1 -m2
12        return money
13                