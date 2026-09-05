class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        res = [0 for _ in range(len(queries))]
        sum_e = 0
        for n in nums : 
            if n % 2 == 0 :
                sum_e += n
            

        for k in range(len(queries)) : 
            cur = nums[queries[k][1]] 
            if cur % 2 == 0 :
                sum_e -= cur
            cur += queries[k][0]

            nums[queries[k][1]] = cur

            if cur % 2 == 0 :
                sum_e += cur
            
            res[k] = sum_e
            
        return res