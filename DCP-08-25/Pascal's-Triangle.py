class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 1 :
            return [[1]]
        res = [[1],[1,1]]
        for i in range(3 , numRows +1) :
            cur = []
            for j in range(i) :
                x,y =  j-1 , j
                if x == -1 or y == i - 1:
                    cur.append(1)
                else :
                    cur.append(res[-1][x] + res[-1][y])
            res.append(cur)
        return res

