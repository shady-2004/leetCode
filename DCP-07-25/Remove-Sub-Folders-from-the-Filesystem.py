class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        elems = set(folder)
        res = []
        for f in folder :
            notSub = True
            cur = ""

            for i in range(len(f)):
                if f[i] == "/" and cur in elems :
                    notSub = False
                    break

                cur+=f[i]
             
            if notSub :
                res.append(f)

        return res
            
