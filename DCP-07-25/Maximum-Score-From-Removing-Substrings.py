class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        score = 0
        
        stack = []

        shape = ["ab","ba"]

        scores = [x,y]
    
        first = 0
        if y > x :
            first = 1 

        for i in range(len(s)) :
            if len(stack)  and stack[-1] + s[i] == shape[first] :
                    score += scores[first]
                    stack.pop()
            else :
                stack.append(s[i])


        stack2=[]

        if first == 0:
            first = 1
        else :
            first = 0

        for i in range(len(stack)) :
            if len(stack2)  and stack2[-1] + stack[i] == shape[first] :
                    score += scores[first]
                    stack2.pop()
            else :
                stack2.append(stack[i])

        return score