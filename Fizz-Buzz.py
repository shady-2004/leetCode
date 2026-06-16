1class Solution:
2    def fizzBuzz(self, n: int) -> List[str]:
3        res = []
4        for i in range(1,n+1):
5            if i % 3 == 0 and i % 5 == 0 :
6                res.append('FizzBuzz')
7            elif i % 3 == 0 :
8                res.append('Fizz')
9            elif i % 5 == 0 :
10                res.append('Buzz')
11            else :
12                res.append(f"{i}")
13        return res