class Solution:
    def evaluate(self, s: str, knowledge: list[list[str]]) -> str:
        know = {}
        for a,n in knowledge :
            know[a] = n
        fnd = False
        res = ""
        cur = ""
        for k in s :
            if k == "(" :
                fnd = True
            elif k == ")" :
                fnd = False 
                if cur in know :
                    res += know[cur]
                else :
                    res += "?"
                cur = ""
            elif fnd :
                cur += k
            else :
                res += k 
        return res
                 
