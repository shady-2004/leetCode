class Solution:
    def isRectangleOverlap(self, rec1: List[int], rec2: List[int]) -> bool:
        w = min(rec1[2],rec2[2]) - max(rec1[0],rec2[0])
        h = min(rec1[3],rec2[3]) - max(rec1[1],rec2[1])
        
        return w > 0 and h > 0 