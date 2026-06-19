1class Solution:
2    def isAlienSorted(self, words: List[str], order: str) -> bool:
3        vals = {}
4        
5        for i in range(len(order)) :
6            vals[order[i]] = i
7        
8        for i in range(len(words)) :
9            for j in range(i+1 ,len(words)) :
10                for k in range(len(words[i])) :
11                    if k < len(words[j]) :
12                        if vals[words[i][k]] > vals[words[j][k]] : return False
13                        elif vals[words[i][k]] < vals[words[j][k]]  : break
14                    else : return False
15        return True
16