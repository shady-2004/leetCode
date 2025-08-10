class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        num = f"{n}"
        visited = [0 for _ in range(len(num))]
        def permu(cur):
            if len(cur) == len(num) :
                if cur[0] == "0" :
                    return False
                if int(cur) & (int(cur)-1) ==0 :
                    return True
                return False

            for j in range(len(visited)) :
                if num[j] == "0" and len(cur) ==0 :
                    continue
                if visited[j] == 0 :
                    visited[j] = 1
                    res = permu(cur + num[j])
                    visited[j] = 0
                    if res ==True :
                        return True
            return False
        return permu("")