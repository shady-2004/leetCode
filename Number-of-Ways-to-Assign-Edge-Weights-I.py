1class Solution:
2
3    def assignEdgeWeights(self, edges: List[List[int]]) -> int:
4        tree = {}
5        mod = 1000000007
6
7        for edge in edges :
8            if edge[0] in tree :
9                tree[edge[0]].append(edge[1])
10            else :
11                tree[edge[0]] = [edge[1]]
12
13            if edge[1] in tree :
14                tree[edge[1]].append(edge[0])
15            else :
16                tree[edge[1]] = [edge[0]]
17
18
19        max_d = 0
20        def dfs( current , prev = -1 ,depth =0):
21            nonlocal max_d
22            
23            max_d = max(max_d , depth)
24                
25            for node in  tree[current] :
26                if node != prev :
27                     dfs(node , current , depth + 1) 
28        dfs(1)
29        return ( 2 ** ( max_d-1 ) ) % (mod)
30        
31        