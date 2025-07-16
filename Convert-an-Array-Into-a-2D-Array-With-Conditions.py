class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        freq ={}
        res = []
        for num in nums :
            if num in freq :
                freq[num]+=1
            else :
                freq[num]=1

        while len(freq) > 0 :
            row = []
            for num in list(freq.keys()) :
                row.append(num)
                if freq[num] == 1 :
                    del freq[num]
                else :
                    freq[num]-=1
            res.append(row)
        return res