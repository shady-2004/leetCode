1class Solution:
2    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
3        n , m =  len(matrix) , len(matrix[0]) 
4        res = []
5        for j in range(m) :
6            row = []
7            for i in range(n) :
8                row.append(matrix[i][j])
9            res.append(row)
10        return res