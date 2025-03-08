class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res=0
        for cust in accounts :
            temp=0
            for acc in cust :
                temp+=acc
            res=max(res,temp)
        return res