class Solution:
    def calPoints(self, operations: List[str]) -> int:
        score=0
        stack=[]
        for op in operations :
            if op.isnumeric()==False and len(op)==1 :
                
                if op=='+':
                    stack.append(stack[-1]+stack[-2])
                elif op=='D':
                    stack.append(2*stack[-1])
                else :
                    stack.pop()
            else :
                stack.append(int(op))

        return sum(stack)

            
        
