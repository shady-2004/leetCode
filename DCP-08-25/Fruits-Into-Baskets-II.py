class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
    
        visited = set()
        cnt = 0

        for n in fruits :
            for i in range( len(baskets) ) :
                if baskets[i] >= n and i not in visited :
                    visited.add(i)
                    cnt += 1
                    break  
 
        return len( fruits ) - cnt
 