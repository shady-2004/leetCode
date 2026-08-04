class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        MIN = min(nums)
        MAX = max(nums)
        occ = set(nums) 
        res = []
        for i in range(MIN + 1 , MAX) :
            if i not in occ : 
                res.append(i)
        return res