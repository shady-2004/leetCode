class Solution:
    def countDigits(self, num: int) -> int:
            cnt=0
            digits=str(num)
            for i in digits:
                if num%int(i) ==0 :
                    cnt=cnt+1
            return cnt
        