1class Solution:
2    def minimumLength(self, s: str) -> int:
3        i = 0
4        j = len(s) - 1
5        cur = ''
6        while (j-i) > 0 :
7            if s[i] == s[j] :
8                cur = s[i]
9            else : break 
10            
11            stop = (j-i) // 2 + i
12
13            while  j > i and s[j] == cur :
14                j -= 1
15            while i < j and  s[i] == cur :
16                i += 1
17            
18        if i == j and s[i] == cur :
19             return 0 
20            
21                
22        return j-i + 1