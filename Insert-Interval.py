1class Solution:
2    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
3        intervals.append(newInterval)
4        intervals.sort(key = lambda x : x[0])
5        cnt = len(intervals)
6        n = len(intervals) - 1
7        i = 0
8        while i < n :
9            if (intervals[i][1] >= intervals[i+1][0]):
10                intervals[i+1][0] = intervals[i][0]
11                intervals[i+1][1] = max( intervals[i][1] , intervals[i+1][1] )
12                del intervals[i]
13                i -= 1
14                n -=1
15            i += 1
16        return intervals                 