class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        nums1.sort()
        minO = 11111111
        sol = True
        for n in nums1 : 
            if n % 2 == 0 :
                if n < minO : 
                    sol = False 
                    break
            else : 
                minO = min(minO, n)
        if sol :
            return True

        minO = 11111111
        sol = True

        for n in nums1 : 
            if n % 2  :
                if n < minO : 
                    sol = False
                    print(sol)
                    break
                minO = min(minO, n)
                
        return sol