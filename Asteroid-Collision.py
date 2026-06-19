1class Solution:
2    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
3        def sign(val) :
4            if val > 0 : return 1
5            return 0
6
7        stack = []
8        for ast in asteroids :
9            stack.append(ast)
10            while len(stack) >= 2 :
11                if not sign(stack[-1]) :
12                    if sign(stack[-2]) :
13                        if abs(stack[-1]) > abs(stack[-2]) :
14                            stack[-1] , stack[-2] = stack[-2] , stack[-1]
15                        elif abs(stack[-1]) == abs(stack[-2]) :
16                            stack.pop()
17                        stack.pop()
18                    else : break
19                else : break
20        return stack 