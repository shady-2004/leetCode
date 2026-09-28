class Solution:
    def maxDepth(self, s: str) -> int:
        stack = []
        res = 0
        for k in s :
            if  k == '(' :
                stack.append(k)
                res = max(res,len(stack))
            elif k == ")" :
                stack.pop()
        return res