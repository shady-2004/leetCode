class Solution:
    def distinctSubseqII(self, s: str) -> int:
        MOD = 10**9 + 7
        n = len(s)
        dp = [0 for _ in range(n + 1)]
        lastocc = [-1 for _ in range(26)]

        dp[0] = 1

        for i in range(1,n+1) :
            c = ord(s[i-1])-ord('a')
            dp[i] = 2 * dp[i-1]

            if lastocc[c] != -1 :
                dp[i] -= dp[lastocc[c]]

            lastocc[c] = i - 1

            dp[i]%=MOD

        return (dp[n] - 1) % MOD