class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        cnt=0
        for emp in hours :
            if emp >=target :
                cnt=cnt+1
        return cnt