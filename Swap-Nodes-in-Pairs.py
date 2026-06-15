1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
8        
9        prev = None
10        temp = head
11
12        while temp :
13            if prev:
14                temp.val , prev.val =  prev.val , temp.val
15                prev = None
16            else :
17                prev = temp
18            temp = temp.next
19
20        return head
21            