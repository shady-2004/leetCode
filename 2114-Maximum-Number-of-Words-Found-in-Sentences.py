class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        res=0
        for words in sentences:
            curSpaces=0
            for ch in words:
                if ch is ' ' :
                    curSpaces+=1
            if curSpaces+1>res :
                 res=curSpaces+1
        return res