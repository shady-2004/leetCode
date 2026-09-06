class Solution:
    def numDistinct(self, s: str, t: str) -> int: 
        dp = [[-1 for _ in range(len(t))] for l in range(len(s))]
        n , m = len(s) , len(t)
        def rec(i , j) :
            nonlocal dp
            if j == m :
                return 1 
            if i == n : 
                return 0
            if dp[i][j] != -1 :
                return dp[i][j]
            cnt = 0 
            if s[i] == t[j] :
                cnt += rec(i+1,j+1)
            cnt += rec(i + 1 , j)
            dp[i][j] = cnt
            return cnt 
        return rec(0,0)