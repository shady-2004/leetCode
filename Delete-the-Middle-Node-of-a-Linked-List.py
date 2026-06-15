1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
8        cnt = 0
9        def rec(node , cur = 0) :
10            nonlocal cnt
11            if not node :
12                return None
13            cnt +=1 
14            node.next = rec(node.next,cur + 1)
15            if math.floor(cnt/2) == cur :
16                return node.next
17            return node
18
19        return rec(head)