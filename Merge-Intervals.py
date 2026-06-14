1class Solution:
2    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
3        intervals.sort(key = lambda x : x[0])
4        cnt = len(intervals)
5        n = len(intervals) - 1
6        i = 0
7        while i < n :
8            if (intervals[i][1] >= intervals[i+1][0]):
9                intervals[i+1][0] = intervals[i][0]
10                intervals[i+1][1] = max( intervals[i][1] , intervals[i+1][1] )
11                del intervals[i]
12                i -= 1
13                n -=1
14            i += 1
15        return intervals               
16