class Solution:
    def countKeyChanges(self, s: str) -> int:
        res=0
        for i in range(1,len(s)):
            if s[i].lower() != s[i-1].lower():
                res+=1
        return res