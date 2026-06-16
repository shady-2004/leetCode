1class Solution:
2    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
3        n , m = len(mat) , len(mat[0])
4        if n*m != r*c :
5            return mat
6        matrix = [[0] * c for _ in range(r)]
7
8        idx = 0
9        for i in range(n):
10            for j in range(m):
11                matrix[idx//c][idx%c] = mat[i][j]
12                idx += 1
13
14        return matrix