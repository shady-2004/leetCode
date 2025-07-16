class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        notIn=[]
        res=[]
        cnt = {}
        arr2S=set(arr2)
        for i in arr1 :
            if i in arr2S :
                if i in cnt :
                    cnt[i]+=1
                else:
                     cnt[i]=1
            else :
                 notIn.append(i)
        
        notIn.sort()

        for i in arr2 :
            cur = [i]*cnt[i]
            res = res + cur
        return res + notIn 