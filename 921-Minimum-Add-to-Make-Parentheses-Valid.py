class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        o = 0
        m = 0
        for k in s :
            if k == ")" :
                if o == 0:
                    m += 1
                else : o -= 1
            else : o+=1 

        
        return m + o