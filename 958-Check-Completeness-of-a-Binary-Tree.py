# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCompleteTree(self, root: Optional[TreeNode]) -> bool:
        queue = deque()
        queue.append(root)
        cur = 0
        level = 0
        before = True
        while len(queue) : 
            s = len(queue)
                
            prev = True
            while s :
                cur_prev = True
                


                node = queue.popleft()

                if node.left : 
                    if not before or not prev : 
                        return False
                    queue.append(node.left)
                
                if node.right : 
                    if not before or not prev : 
                        return False
                    if not node.left : return False

                    queue.append(node.right)
                
                if not node.left or not node.right : 
                    prev = False 
                

                
                s -= 1

            level += 1
            before = prev

        return True


