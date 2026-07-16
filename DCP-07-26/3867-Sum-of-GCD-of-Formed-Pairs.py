class Solution:
    def gcdSum(self, nums: list[int]) -> int:

        def gcd(n,m) :
            x = min(n,m)
            y = max(n,m)
            while x > 1:
                temp = y % x 
                if temp :
                    x , y = min(temp,x) , max(temp,x)
                else :
                    return x 
            return 1

        mx = nums[0]
        prefixGcd = []

        for n in nums :
            mx = max(mx , n)
            g = gcd(n , mx)
            prefixGcd.append(g)
        

        i , j = 0, len(nums) - 1

        prefixGcd.sort()
        
        res = 0

        while i < j :
            res += gcd(prefixGcd[i],prefixGcd[j])
            i += 1
            j -= 1
        return res