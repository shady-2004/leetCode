class Solution:
    def firstUniqChar(self, s: str) -> int:
        track=[0]*26
        for c in s :
            track[ord(c)-97]+=1
        for i in range(len(s)):
            if track[ord(s[i])-97] ==1 :
                return i
        return -1
