class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        cnt =0
        l=0
        r=2
        m=1
        while r<len(nums):
            if (nums[l]+nums[r])==nums[m]/2 :
                cnt+=1
            r+=1
            l+=1
            m+=1
        return cnt