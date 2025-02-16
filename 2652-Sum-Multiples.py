class Solution:
    def sumOfMultiples(self, n: int) -> int:
        res=0
        for i in range (1 ,n+1) :
            if i%3 is 0 or i%5 is 0  or i%7 is 0:
                res+=i 
            
        return res