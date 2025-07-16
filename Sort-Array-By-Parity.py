class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)) :
            for j in range(len(nums)-i-1) :
                if nums[j] % 2 == 1:
                    nums[j],nums[j+1]=nums[j+1],nums[j]
        return nums