1class Solution:
2    def maxIceCream(self, costs: List[int], coins: int) -> int:
3        costs.sort()
4        cnt = 0
5        for cost in costs :
6            coins -= cost
7            if coins  >= 0 :
8                cnt +=1
9            else : break
10        return cnt 
11                