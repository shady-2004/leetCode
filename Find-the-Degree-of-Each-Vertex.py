1class Solution:
2    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
3        n = len(matrix)
4        res = [0 for i in range(n)]
5        for i in range(n):
6            for j in range(i + 1 ,n) :
7                res[i]+=matrix[i][j]
8                res[j]+=matrix[i][j]
9        return res