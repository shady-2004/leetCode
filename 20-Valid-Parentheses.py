class Solution:
    def isValid(self, s: str) -> bool:
        s1 = []
        op = ['(','[','{']
        dic = {
            ')' :  '(',
            '}' :  '{',
            ']' :  '[',
        }

        for p in s : 
            if p in op :
                s1.append(p)
            else :
   
                if len(s1) and  dic[p] == s1[-1] :
                    s1.pop()
                else :
                    return False
        print(s1)
        
        return len(s1) == 0 
