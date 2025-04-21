class Solution:
    def reverseString(self, s: List[str]) -> None:
        l=0
        r=len(s)-1
        while l<r :
            t=s[r]
            s[r]=s[l]
            s[l]=t
            l+=1
            r-=1
        