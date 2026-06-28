1class Solution:
2    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
3        arr.sort()
4        arr[0] = 1 
5        res = 1
6        for i in range(1 , len(arr)) :
7            if arr[i] - arr[i-1] > 1  : 
8                arr[i] = arr[i-1] + 1
9            res = max(res,arr[i])
10        return res
11
12