class Solution:
    def findGCD(self, nums: List[int]) -> int:
        nums.sort()
        x = nums[0]
        y = nums[-1]
        while x :
            mod = y % x
            if mod :
                x , y = min(x,mod) , max(x,mod)
            else :
                return x
        return None
        