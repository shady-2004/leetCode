class Solution:
    def largestGoodInteger(self, num: str) -> str:
        largest = ""

        for i in range(10) :
            if (f"{i}")*3 in num :
                largest =  (f"{i}")*3
        return largest