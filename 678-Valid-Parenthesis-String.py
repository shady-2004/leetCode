class Solution:
    def checkValidString(self, s: str) -> bool:
        n = len(s)
        dp = [[-1 for _ in range(n)] for _ in range(n)]
        def rec(i,o ) :
            nonlocal s ,n  ,dp
            if i == n :
                return o == 0
            
            if dp[i][o] != -1 :
                return dp[i][o]
            
            cur = False

            if s[i] == "(" :
                cur = rec(i+1 , o + 1)
            elif s[i] == ")"  :
                if o > 0 :
                    cur = rec(i+1 , o - 1)
            else :
                cur = rec(i+1 , o + 1) or rec(i+1 , o ) 
                if o > 0 :
                    cur = cur or rec(i+1 , o - 1)

            dp[i][o] = cur
            return cur

        return rec(0,0)

            
