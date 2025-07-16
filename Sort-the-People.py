class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        mapNames = {}
        for i in range(len(names)) :
            mapNames[heights[i]]=names[i]
        heights.sort(reverse=True)
   
        res = []

        for h in heights :
            res.append(mapNames[h])
        return res