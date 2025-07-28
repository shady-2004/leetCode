class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        def maxOr(nums) :
            OR = 0
            for num in nums :
                OR = OR|num
            return OR
        OR = maxOr(nums)
        cnt = 0

        def allSubsets(nums,curOr = 0,i = 0) :
            nonlocal cnt
            if i == len(nums) :
                if curOr == OR :
                    cnt +=1
                return
            if curOr > OR :
                return

            allSubsets(nums,curOr|nums[i],i+1)
            allSubsets(nums,curOr,i+1)

        allSubsets(nums)
        return cnt
            
        
        
            
            
            