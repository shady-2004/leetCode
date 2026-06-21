1class Solution:
2    INT_MIN = -(2**31)
3    INT_MAX = 2**31 - 1
4    def myAtoi(self, s: str) -> int:
5        res = 0
6        sign = 1
7        i = 0 
8        for c in s :
9            if c == " " : i+=1
10            else : break
11        
12        if i == len(s) : return 0 
13
14        if s[i] == '+' or s[i] == '-' :
15            if s[i] == '-' :
16                sign = -1 
17            i +=1
18
19        while i < len(s) :
20            if s[i].isdigit() :
21                res = res*10 + int(s[i])
22            else : break 
23            i +=1
24        return max(self.INT_MIN,min(res*sign,self.INT_MAX))