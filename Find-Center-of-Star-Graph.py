1class Solution:
2    def findCenter(self, edges: List[List[int]]) -> int:
3        cnt = set()
4        for edge in edges :
5            if edge[0] in cnt :
6                return edge[0]
7            else : cnt.add(edge[0])
8
9            if edge[1] in cnt :
10                return edge[1]
11            else : cnt.add(edge[1])
12            
13        