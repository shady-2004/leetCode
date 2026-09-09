class Solution:
    def countCommas(self, n: int) -> int:
        num = 0
        cnt = 3
        base = 1000
        while n >= base :
            if n >= base*10 :
                num += (base*9 )*(cnt//3)
            else :
                num += ( n - base + 1 )*(cnt//3)
            base *= 10
            cnt +=1

        return num