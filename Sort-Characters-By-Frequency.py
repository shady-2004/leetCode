class Solution:
    def frequencySort(self, s: str) -> str:
        freq = {}
        for c in s:
            if c in freq :
                freq[c] +=1
            else:
                freq[c] = 1
        return "".join(sorted(s,key=lambda c : (-freq[c],c)))