class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        def sum_digits(n) :
            s = 0
            while n :
                s += n % 10
                n//=10
            return s
        cnt = [0 for _ in range(9*5)]

        for i in range(lowLimit , highLimit + 1 ) : 
            temp = sum_digits(i)
            cnt[temp-1] += 1

        return max(cnt)

