1class Solution:
2    def isHappy(self, n: int) -> bool:
3        mem = set()
4        mem.add(n)
5        while 1 :
6            res = 0
7            while n > 0 :
8                res += (n%10) ** 2
9                n /= 10
10                n = int(n)
11            n = res
12            if n == 1 :
13                return True
14            if n in mem:
15                return False
16            mem.add(n)