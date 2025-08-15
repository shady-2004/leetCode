# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        startNode = None
        def setParents(root,parent = None) :
            nonlocal startNode
            if root == None :
                return 
            root.parent = parent
            if root.val == start :
                startNode = root
            setParents(root.right,root)
            setParents(root.left,root)
        setParents(root)
        visited = set()
        time = 0
        queue = [startNode]
        while len(queue) > 0:
            l = len(queue)
            while l >0 :
                cur = queue.pop(0)
                visited.add(cur.val)
                if cur.left and cur.left.val not in visited :
                    queue.append(cur.left)
                if cur.right and cur.right.val not in visited :
                    queue.append(cur.right)
                if cur.parent and cur.parent.val not in visited :
                    queue.append(cur.parent)
                l-=1
            time +=1
        return time-1
