1class Solution:
2    def processStr(self, s: str) -> str:
3        res = []
4        for op in s :
5            match op :
6                case '*' :
7                    if not len(res):
8                        continue
9                    res.pop()
10                case '#' :
11                    if not len(res):
12                        continue
13                    res += res
14                case '%' :
15                    if not len(res):
16                        continue
17                    res.reverse()
18                case _ :
19                    res.append(op)
20        return "".join(res)