# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfSubtree(self, root: TreeNode) -> int:
        def rec (node ) :
            nonlocal cnt
            if not node :
                return [0,0]

            left = rec(node.left)
            right = rec(node.right)
            comb = [left[0]+right[0]+node.val , left[1]+right[1]+1]
            
            if node.val == comb[0]//comb[1] :
                cnt += 1
            
            return comb

        cnt = 0
        rec(root)
        return cnt
            

