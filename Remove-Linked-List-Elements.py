1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
8        prev = None
9        temp = head
10        while temp :
11            if temp.val == val :
12                if prev :
13                    prev.next = temp.next
14                else :
15                    head = temp.next
16                   
17                temp = temp.next
18            else :
19                prev = temp
20                temp = temp.next
21        return head