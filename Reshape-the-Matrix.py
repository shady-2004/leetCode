1class Solution:
2    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
3        n , m = len(mat) , len(mat[0])
4        if n*m != r*c :
5            return mat
6        matrix = [[0] * c for _ in range(r)]
7        x = 0
8        y = 0
9        for i in range(n):
10            for j in range(m):
11                print (x , y)
12                if y == c :
13                    y = 0
14                    x += 1
15                matrix[x][y] = mat[i][j]
16                y += 1
17
18        return matrix