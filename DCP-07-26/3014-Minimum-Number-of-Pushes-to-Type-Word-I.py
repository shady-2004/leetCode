class Solution:
    def minimumPushes(self, word: str) -> int:
        n = len(word)
        res = 0
        for i in range(1,5) :
            if 8 * i <= n :
                res += 8 * i
            else : 
                res +=( n - (8 * (i-1)) ) * i
                break
        return res