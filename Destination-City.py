class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        edges = {}
        for path in paths :
            edges[path[0]] = path[1] 
        
        for src in edges :
            dist =edges[src]
            if dist not in edges :
                return dist