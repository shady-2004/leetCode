1class Solution:
2    def lemonadeChange(self, bills: List[int]) -> bool:
3        have = {
4            5 : 0,
5            10 : 0,
6        }
7        for bill in bills :
8            if bill == 10 :
9                if not have[5]:
10                    return False 
11                have[10] += 1
12                have[5] -= 1
13                continue
14
15            if bill == 20 :
16                if not ( have[5] >=3 or have[5]>=1 and have[10] >= 1 ):
17                    return False
18                if have[5]>=1 and have[10] >= 1 :
19                    have[10] -= 1 
20                    have[5] -= 1
21                else :
22                    have[5] -= 3
23                continue
24                
25            have[5] +=1
26        return True