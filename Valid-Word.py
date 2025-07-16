class Solution:
    def isValid(self, word: str) -> bool:
        cond = [False,False]

        if len(word) < 3 :
            return False 
        
        if not word.isalnum() :
            return False
        
        vowel = ("a","e","i","o","u")

        for char in word.lower() :
            if not char.isdigit() :
                if char in vowel :
                    cond[0]=True 
                else :
                    cond[1]=True
        return cond[0] and cond[1]