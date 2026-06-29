1class Solution:
2    def numOfStrings(self, patterns: List[str], word: str) -> int:
3        res = 0 
4        for p in patterns :
5            res += int(p in word)
6        return res