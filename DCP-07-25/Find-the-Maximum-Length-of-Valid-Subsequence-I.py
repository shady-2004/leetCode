class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        prev = nums[0] % 2
        cur = 1
        curE = 0
        curO = 0

        for i in range(0,len(nums)) :
            if i !=0 and nums[i] % 2 != prev :
                cur+=1
                prev = nums[i] % 2
            if nums[i]%2 == 0 :
                curE+=1
            else :
                curO+=1

        return max([curE,curO,cur])
        