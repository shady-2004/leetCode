1class Solution:
2    def maxNumberOfBalloons(self, text: str) -> int:
3        freq = {"b":1 ,"a":1 , "l":2 , "o":2 , "n":1}
4        cnt = {"b":0 ,"a":0 , "l":0 , "o":0 , "n":0}
5        for s in text :
6            if s in freq :
7                cnt[s] += 1
8        
9        return min(
10            cnt["b"] // freq["b"],
11            cnt["a"] // freq["a"],
12            cnt["l"] // freq["l"],
13            cnt["o"] // freq["o"],
14            cnt["n"] // freq["n"],
15        )