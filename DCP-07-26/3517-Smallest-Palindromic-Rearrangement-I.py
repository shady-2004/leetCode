class Solution:
    def smallestPalindrome(self, s: str) -> str:
        start = ""
        end = ""
        odd = ""
        cnt = [0 for _ in range(26)]

        for x in s :
            cnt[ord(x)-ord('a')] += 1

        for i in range(26) :
            if cnt[i] % 2 == 1 :
                odd = chr(i + ord('a'))
            t = cnt[i] // 2
            start += chr(i + ord('a'))*t
            end = chr(i + ord('a'))*t + end

        return start + odd + end
