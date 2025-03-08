class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product=1
        summ=0
        while n >0 :
            product*=n%10
            summ+=n%10
            n//=10
        return product-summ
