class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        sumOdd = 0
        sumEven = 0
        for i in range(1 ,  n+1) :
            sumOdd += 2* (i-1) + 1
            sumEven += 2*i 


        x = min(sumOdd , sumEven)
        y = max(sumOdd , sumEven)
        while y > 1 :
            mod = y % x 
            if  mod :
                x = min(mod , x )
                y = max(mod , x)
            else :
                return x 
            

         