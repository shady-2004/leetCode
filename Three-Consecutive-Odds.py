class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        c=0
        for el in arr :
            if el%2==1 :
                c+=1
                if c==3 :
                    return True
            else :
                c=0
        return False