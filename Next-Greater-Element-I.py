class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res=[]
        for num in nums1 :
            numFnd = False
            greater = -1 
            for num2 in nums2:
                if numFnd and num2 > num :
                    greater = num2 
                    break
                if num==num2 :
                    numFnd = True
            res.append(greater)
        return res