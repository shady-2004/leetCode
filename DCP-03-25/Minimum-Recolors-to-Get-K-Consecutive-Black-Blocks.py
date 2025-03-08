class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        r=k
        c=0
        for i in range(k):
            c+=blocks[i] =='B'

        res=k-c

        while r <len(blocks) :
            
            c-= 1 if blocks[r-k]=='B' else  0
            c+= 1 if blocks[r]=='B' else  0
       
            res=min(res,k-c)
            r+=1
            
        return res

            