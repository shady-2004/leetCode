1class Solution:
2    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
3        dirc = 1
4        base_r = 0
5        base_c = 0
6        n = len(matrix) - 1
7        m = len(matrix[0]) - 1 
8        i = 0 
9        j = 0
10        
11        res = []
12        while base_r <= n and base_c <= m :
13
14            if ( i >= base_r and i <= n ) and ( j>=base_c and j <= m ) :
15                res.append(matrix[i][j])
16                match dirc :
17                    case 1 :
18                        j +=1
19                    case -1 :
20                        j -=1
21                    case 2 :
22                        i +=1
23                    case -2 :
24                        i -=1
25            else :
26                match dirc :
27                    case 1 :
28                        dirc = 2
29                        base_r += 1
30                        j = m
31                        i +=1
32                    case -1 :
33                        dirc = -2
34                        n -= 1
35                        j = base_c
36                        i -= 1
37                    case 2 :
38                        dirc = -1
39                        m -= 1
40                        i = n
41                        j -= 1
42                    case -2 :
43                        dirc = 1
44                        base_c += 1
45                        i = base_r
46                        j += 1
47        return res