class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        res = []
        for i in range(len(words)) :
            if words[i].find(x) !=-1:
                res.append(i)
        return res