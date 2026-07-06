class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda  x : (x[0], -x[1]))
        
        inter =  intervals[0]
        res = 1

        for i in range(1,len(intervals)) :
            if not( intervals[i][0] >= inter[0] and intervals[i][1] <= inter[1] ) :
                res += 1
                inter[1] = intervals[i][1]
        return res