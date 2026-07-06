class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        def calc(word) :
            n = 0
            for s in word :
                n *=10
                n += ( ord(s) - ord('a'))
            return n 

        
        return calc(firstWord) + calc(secondWord) == calc(targetWord)