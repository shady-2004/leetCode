class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        cnt = 0
        for i in range(len(nums)) :
            if nums[i] == val :
                cnt += 1 
                swaped = False
                for j in range(len(nums)-1 ,i, -1) :
                    if nums[j] != val and nums[j] != '_' :
                        nums[j] , nums[i] = "_" , nums[j]
                        swaped = True
                        break
                if not swaped :
                    nums[i] = "_"
       
        return len(nums) - cnt