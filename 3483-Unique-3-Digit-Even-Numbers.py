class Solution:
    def totalNumbers(self, digits: List[int]) -> int:
        def rec(num,i):
            nonlocal occ , cnt ,used
            if i == 3 : 
                if num % 2 == 0 and num not in occ :
                    cnt +=1 
                    occ.add(num)
                return
            
            for k in range(len(digits)) :
                if not used[k] :
                    if i == 0 and digits[k] == 0 :
                        continue
                    used[k] = True
                    rec(num*10 + digits[k] , i + 1)
                    used[k] = False
        
        used = [False for _ in range(len(digits))]
        occ = set()
        cnt = 0
        rec(0,0)
        return cnt






