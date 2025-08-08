class Solution:
    def soupServings(self, n: int) -> float:
        ways = [[100,0],[75,25],[50,50],[25,75]]

        if n > 5000:
            return 1

        dp = {}

        def rec(a,b):
            
            if a in dp :
                if b in dp[a] :
                    return dp[a][b]
            
            if a <= 0:
                if b <= 0 :
                    return 0.5
                return 1
            if b <= 0 :
                return 0
            res = 0
            for way in ways :
                res += rec(a-way[0],b-way[1])

            if a not in dp :
                dp[a] = {}

            dp[a][b] = res*0.25 
            return res*0.25

       
        return rec(n,n)