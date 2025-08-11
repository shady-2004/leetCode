class Solution:
    def productQueries(self, n: int, queries: List[List[int]]) -> List[int]:
        powers = []
        cur = 1
        MODULE = 10**9 + 7
        while cur << 1 <= n :
            cur = cur << 1
        sum = 0
        while sum != n :
            if cur + sum <= n :
                sum += cur
                powers.append(cur)
            cur = cur >> 1

        powers.reverse()
        for i in range(1,len(powers)) :
            powers[i] =  powers[i] * powers[i-1]

        res = []


        for i,j in queries :
            if i == j:
                if i == 0:
                    res.append(powers[i])
                else :
                    res.append(powers[j]//powers[i-1])
            else :
                if i == 0:
                    res.append(powers[j])
                else :
                    res.append(powers[j]//powers[i-1])
            res[-1]%=MODULE
        return res