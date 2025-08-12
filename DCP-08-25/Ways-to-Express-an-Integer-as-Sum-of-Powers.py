
class Solution:
    def numberOfWays(self, n: int, x: int) -> int:
        powers = []
        cur = 1
        MODULO = 10**9 + 7
        while cur**x <= n:
            powers.append(cur**x)
            cur+=1
        
        ways = 0

        dp = {}
        def rec(i = 0 , c = 0) :
            
            if i in dp and c in dp[i] :
                return dp[i][c]

            if c == n :
                return 1
            if c > n or i == len(powers):
                return 0

            if i not in dp :
                dp[i] = {}
            res =  (rec(i+1 , c) + rec(i+1 , c + powers[i]))%MODULO

            dp[i][c] = res

            return res
        return rec()
            


    