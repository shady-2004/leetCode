class Solution:
    def limitOccurrences(self, nums: list[int], k: int) -> list[int]:
        cnt = {}
        n = len(nums)    
        i = 0
        while i < n : 
            if nums[i] in cnt :
                if cnt[nums[i]] == k :
                    del[nums[i]]
                    n -= 1
                    i -= 1
                else :
                    cnt[nums[i]] += 1 
                
            else :
                cnt[nums[i]] = 1 
            i += 1

        return nums