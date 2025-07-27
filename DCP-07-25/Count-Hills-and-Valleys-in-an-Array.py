class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        cnt = 0
        i = 1
        while i < len(nums) -1 :
            nEL = -1
            nER = -1
            for j in range(i + 1,len(nums)):
                if nums[i] != nums[j] :
                    nER = j
                    break
            for j in range(i-1 ,-1 , -1):
                if nums[i] != nums[j] :
                    nEL = j
                    break
            if nEL != -1 and nER != -1 :
                if nums[nEL] < nums[i] and nums[nER] < nums[i] or nums[nEL] > nums[i] and nums[nER] > nums[i]:
                    cnt += 1
            if nER != -1 :
                i = nER
            else :
                i+=1
        return cnt