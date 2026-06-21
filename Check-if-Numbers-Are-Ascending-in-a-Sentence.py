1class Solution:
2    def areNumbersAscending(self, s: str) -> bool:
3        cur = -1 
4        i = 0
5        while i < len(s) :
6            num = 0 
7            if s[i].isdigit() :
8                while i < len(s) and  s[i].isdigit() :
9                    num = num*10 + int(s[i])
10                    i+=1
11                if num > cur : cur = num 
12                else : return False
13            i += 1
14        return True