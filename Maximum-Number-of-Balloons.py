class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        freq={}

        balloon =  set(char for char in "balloon")
        for char in text :
            if char in freq :
                freq[char] += 1
            else :
                freq[char] = 1 

        for char in balloon :
            if char not in freq :
                return 0

        freq['l'] = freq['l']//2

        freq['o'] = freq['o']//2

        count = 100000

        for char in text :
           
            if char in balloon and count > freq[char] :
                count = freq[char]
        return count