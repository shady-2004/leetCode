1import numpy as np
2
3class Solution:
4    def islandPerimeter(self, grid: List[List[int]]) -> int:
5        n , m = len(grid) , len(grid[0])
6        dirs=[[1,0],[-1,0],[0,-1],[0,1]]     
7        per = 0
8        dp =[[False] * m for _ in range(n)]   
9        def dfs(i,j):
10            nonlocal n , m ,grid , dp ,dirs ,per
11            if dp[i][j] :
12                return
13            dp[i][j] = True
14            
15            for dir in dirs :
16                x , y = i + dir[0]  ,j + dir[1]
17                if x >=0 and  x < n and y >=0 and  y < m and grid[x][y]  :
18                    dfs(x,y)
19                else :
20                    per += 1
21        for i in range(n) :
22            for j in range(m) :
23                if grid[i][j] :
24                    dfs(i,j)
25                    break
26        return per
27
28            
29