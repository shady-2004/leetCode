1class Solution:
2    def numberOfSubstrings(self, s: str) -> int:
3        cnt = [0 , 0 , 0]
4        i , j = 0 , 0
5        print(ord('a'))
6        n = len(s)
7        cnt[ord(s[0]) - ord('a')] += 1
8        res = 0 
9        while 1 :
10            if cnt[0] and cnt[1] and cnt[2] :
11                res += n - j 
12                cnt[ord(s[i])-ord('a')] -= 1
13                i+=1
14            elif j < n-1 :
15                j+=1
16                cnt[ord(s[j])-ord('a')] += 1
17            else : break
18
19        return res