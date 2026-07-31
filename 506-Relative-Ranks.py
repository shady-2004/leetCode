class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        copy = score[:]
        copy.sort(reverse=True)
        dic = {}
        res = []
        for i in range(len(copy)) : 
            dic [copy[i]] = i + 1
        
        for i in range(len(score)) :
            t = dic[score[i]]
            match t :
                case 1 : res.append("Gold Medal")
                case 2 : res.append("Silver Medal")
                case 3 : res.append("Bronze Medal")
                case _ : res.append(f"{t}")
        return res
                

            