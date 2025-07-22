class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        
        l,r =0,0

        nuts = set()

        cur = 0 
        largest = 0

        while l <= r and r < len(nums):
            if nums[r] in nuts :
                nuts.remove(nums[l])
                cur-=nums[l]
                l+=1
            else :
                cur += nums[r]
                nuts.add(nums[r])
                largest = max(cur,largest)
                r+=1
        return largest





