1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def pairSum(self, head: Optional[ListNode]) -> int:
8        max_sum = 0
9        pairs = []
10        temp = head 
11        while temp :
12            pairs.append(temp.val)
13            temp = temp.next
14        n = len(pairs)
15        for i in range(int(n/2)):
16            max_sum = max(max_sum , pairs[i] + pairs[n-1-i])
17
18        return max_sum