class Solution:
    def findValidPair(self, s: str) -> str:
        cnt = [ 0 for _ in range(10)]
        for d in s :
            cnt[int(d)] += 1
        
        i = 0
        while i < len(s) - 1 :
            if s[i] != s[i+1] and cnt[int(s[i])] == int(s[i]) and cnt[int(s[i+1])] == int(s[i+1]): 
                return s[i]+s[i+1]
            i += 1
        return ""