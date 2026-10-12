# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:

        res = []

        def dfs(node, maxVal) -> int:
            if not node:
                return 0
            
            #count the current node as good or bad
            current = 0
            if node.val >= maxVal:
                current = 1

            #update max value seen on this path
            maxVal = max(maxVal, node.val)

            #good nodes in left and right subtree
            left = dfs(node.left, maxVal)
            right = dfs(node.right, maxVal)

            #total good nodes in this subtree
            return current + left + right

        return dfs(root, root.val)



        