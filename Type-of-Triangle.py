class Solution:
    def triangleType(self, nums: List[int]) -> str:
        unique=set()    
        if nums[0]+nums[1]<=nums[2] or nums[0]+nums[2]<=nums[1] or nums[2]+nums[1]<=nums[0] :
            return "none" 

        for num in nums :
            unique.add(num)
        if len(unique)==1:
            return "equilateral"
        elif len(unique)==2:
            return "isosceles"
        else :
            return "scalene"
