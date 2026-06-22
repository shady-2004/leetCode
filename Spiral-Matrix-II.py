1class Solution:
2    def generateMatrix(self, n: int) -> List[List[int]]:
3    
4        dirc = 1
5        base_r = 0
6        base_c = 0
7        matrix = [[0 for _ in range(n)] for _ in range(n)]
8        n-=1
9        m = n
10        i = 0 
11        j = 0
12        cur = 1
13        res = []
14        while base_r <= n and base_c <= m :
15
16            if ( i >= base_r and i <= n ) and ( j>=base_c and j <= m ) :
17                matrix[i][j] = cur 
18                cur += 1
19                match dirc :
20                    case 1 :
21                        j +=1
22                    case -1 :
23                        j -=1
24                    case 2 :
25                        i +=1
26                    case -2 :
27                        i -=1
28            else :
29                match dirc :
30                    case 1 :
31                        dirc = 2
32                        base_r += 1
33                        j = m
34                        i +=1
35                    case -1 :
36                        dirc = -2
37                        n -= 1
38                        j = base_c
39                        i -= 1
40                    case 2 :
41                        dirc = -1
42                        m -= 1
43                        i = n
44                        j -= 1
45                    case -2 :
46                        dirc = 1
47                        base_c += 1
48                        i = base_r
49                        j += 1
50        return matrix