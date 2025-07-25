class Solution:
    def maxSum(self, nums: List[int]) -> int:
        greater = nums[0]
        unique = set()
        for n in nums :
            greater = max(greater,n)
            if n > 0 :
                unique.add(n)
        if len(unique) == 0:
            return greater
        return max(sum(unique),greater)