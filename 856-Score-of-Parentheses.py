class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        stack = []
        for k in s :
            if k == "(" :
                stack.append(k)
            else :
                calc = 0
                while 1 :
                    x = stack.pop() 
                    if x == "(" :
                        if calc == 0 :
                            calc = 1 
                        else : calc *= 2
                        stack.append(calc) 
                        break 
                    else :
                        calc += x 
        
        res = sum(stack)
        return res