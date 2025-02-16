class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        digitsS=0
        elS=0
        for i in nums :
            elS=elS+i
           
            while i > 0 :
                digitsS=digitsS+i%10
                i=int(i/10)

        return abs(digitsS-elS)        
        