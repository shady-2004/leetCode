class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        fRow = -1
        lRow = -1
        fCol = -1
        lCol = -1
        for i in range(len(grid)) :
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    if fRow == -1 :
                        fRow = i
                    if lRow < i :
                        lRow = i
                    if fCol == -1 or fCol > j :
                        fCol = j
                    if lCol < j :
                        lCol = j
        if lRow == -1 and fRow == -1 and lCol == -1 and fCol == -1 :
            return 0
        return (lRow - fRow + 1) * (lCol - fCol + 1) 
                    