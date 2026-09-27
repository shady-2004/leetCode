class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack1 = []

        def lastIndexOf(stack):
            for i in range(len(stack)-1,-1,-1) :
                if stack[i] == "(" :
                    return i
        
        for k in s :
            if k == ")" : 
                i = lastIndexOf(stack1) 
                stack1 = stack1[0:i] + stack1[len(stack1)-1:i:-1]
            else :
                stack1.append(k)


        return "".join(stack1)
                
