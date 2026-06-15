1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
8        kth_f = None
9        kth_l = None
10        def rec(node , cur_f = 1) :
11            nonlocal kth_f , kth_l
12            if not node :
13                return 1
14
15            if cur_f == k :
16                kth_f = node
17
18            cur = rec(node.next , cur_f + 1)
19
20            if cur == k :
21                kth_l = node
22            
23            return cur + 1
24
25        rec(head)
26        kth_f.val , kth_l.val = kth_l.val , kth_f.val 
27        return head