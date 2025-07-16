class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
       
        arr = [0]*len(nums)

        for num in nums :
            arr[num-1] += 1
        
        return [arr.index(2)+1,arr.index(0)+1]