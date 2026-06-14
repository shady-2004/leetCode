1class Solution:
2    def validPalindrome(self, s: str) -> bool:
3        n = len(s)
4        skip_right = 0
5        skip_left = 0
6        false = 0
7
8        for i in range(int(n/2)) :
9            print(s[i + skip_left], s[n-i-1-skip_right])
10            if not ( s[i + skip_left] == s[n-i-1-skip_right] ) :
11                if  s[i + 1 ] == s[n-i-1 ] and (skip_right + skip_left == 0 ) :
12                    skip_left = 1
13                elif  s[i] == s[n-i-2]  and (skip_right + skip_left == 0 ) :
14                    skip_right = 1
15                else :
16                    false = 1
17                    break 
18
19        skip_right = 0
20        skip_left = 0
21        for i in range(int(n/2)) :
22            print(s[i + skip_left], s[n-i-1-skip_right])
23            if not ( s[i + skip_left] == s[n-i-1-skip_right] ) :
24                if  s[i] == s[n-i-2]  and (skip_right + skip_left == 0 ) :
25                    skip_right = 1
26                elif  s[i + 1 ] == s[n-i-1 ] and (skip_right + skip_left == 0 ) :
27                    skip_left = 1
28                else :
29                    false += 1
30                    break 
31                
32        return false < 2
33