class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        res = []
        def rec(o = 0,c = 0 , cur = "") :
            nonlocal res,n
            if o + c == n * 2 :
                res.append(cur)
                return
            
            if o > c :
                rec(o,c+1,cur + ")")
            if o < n :
                rec(o+1,c,cur+"(")
        rec()
        return res