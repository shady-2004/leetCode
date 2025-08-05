class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        stack = []
        res = ""
        for c in s :
            if c == "(" :
                stack.append(c)
                res += c
            elif c == ')' :
                if len(stack) != 0 :
                    stack.pop()
                    res+=c
            else :
                res+=c
        i = len(res) - 1
        while len(stack) !=0:
            if res[i] == "(" :
                res = res[:i] + res[i+1:]
                stack.pop()
            i-=1
        return res