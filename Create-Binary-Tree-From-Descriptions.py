1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def createBinaryTree(self, descriptions: List[List[int]]) -> Optional[TreeNode]:
9        
10        root = None
11        values_nodes = {}
12    
13        def check_node(val , is_child = False) :
14            nonlocal values_nodes
15            node = None
16            if val not in values_nodes :
17                node = TreeNode(val)
18                values_nodes[val] = [node , is_child]
19            else :
20                node = values_nodes[val][0]
21            if is_child :
22                values_nodes[val] = [node , is_child]
23            return node
24        
25        for node in descriptions :
26            parent = check_node(node[0])
27            child = check_node(node[1] , True)
28
29            if node[2] :
30                parent.left = child
31            else :
32                parent.right = child
33            
34        for val in list(values_nodes) :
35            node = values_nodes[val]
36            if not node[1] :
37                return node[0]