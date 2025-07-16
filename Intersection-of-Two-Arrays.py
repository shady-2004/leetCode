class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        inter = set()
        n2 = set(nums2)
        for num in nums1 :
            if num in n2 :
                inter.add(num)
        return list(inter)

