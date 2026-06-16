1class Solution:
2    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
3        n , m = len(image) , len(image[0])
4        for i in range(n) :
5            for j in range(m) :
6                image[i][j] ^=1
7            image[i].reverse()
8        return image