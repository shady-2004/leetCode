class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        arr = []
        n = len(grid)
        m = len(grid[0])
        total = n*m
        for i in range(n) :
            for j in range(m) :
                arr.append(grid[i][j])
        start = 0 

        if k :
            start = total - k 
        
        res = []
        cur = []
        num = 0
        for i in range(total) :
            cur.append(arr[(start + i) % total])
            num += 1
            if num % m == 0 :
                res.append(cur)
                cur = []
        return res

                
