1class Solution:
2    def numRookCaptures(self, board: List[List[str]]) -> int:
3        n , m = len(board) , len(board[0])
4        dirs = [[1,0] , [0,1] , [0,-1] , [-1,0] ]
5        def dfs(i,j,d) :
6            if not (i>=0 and j>=0 and i<n and j<m)  :
7                return 0 
8            if board[i][j] == 'p' :
9                return 1
10            if board[i][j] != '.' :
11                return 0
12            return dfs (i+dirs[d][0], j+dirs[d][1],d)
13        
14        for i in range(n) :
15            for j in range(m) :
16                if board[i][j] == 'R' :
17                    res = 0
18                    for d in range(len(dirs)) :
19                        res += dfs(i+dirs[d][0] , j+dirs[d][1] , d)
20                    return res