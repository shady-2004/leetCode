import numpy as np
class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        n = len(matrix)
        m = len(matrix[0])
        visited = np.full((n,m),-1)
        res = 0
        def rec(i ,j ) :
            nonlocal res
            if i == n or j == m or matrix[i][j] == 0 :
                return 0
            if visited[i,j] !=-1 :
                return visited[i,j]

            res += 1
            right = rec(i , j + 1)
            down = rec(i + 1, j)
            diag = rec(i + 1, j + 1)
            sm = min([right,down,diag])
            
            res += sm
            visited[i,j] = sm + 1
            return sm + 1
        
        for i in range(n) :
            for j in range(m) :
                rec(i,j)
        return int(res)
            
