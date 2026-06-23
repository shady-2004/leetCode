1class Solution:
2    def maximumGap(self, nums: List[int]) -> int:
3        nums.sort()
4        diff = 0
5        for i in range(1,len(nums)) :
6            diff = max(diff,nums[i]-nums[i-1])
7        return diff
8