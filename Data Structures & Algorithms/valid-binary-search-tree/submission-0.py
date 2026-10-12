# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

#every node must fit within a valid value range decided by all its ancestors.

class Solution:
    #dfs
#     def isValidBST(self, root: Optional[TreeNode]) -> bool:

#         def valid(node, left, right):
#             #null 
#             if not node:
#                 return True

#             if not (node.val < right and node.val > left):
#                 return False

#             return (valid(node.left, left, node.val) and 
#                    valid(node.right, node.val, right))

#         return valid(root, float("-inf"), float("inf"))

    #bfs
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True

        q = deque([(root, float("-inf"), float("inf"))])

        while q:
            node, left, right = q.popleft()
            if not (left < node.val < right):
                return False
            if node.left is not None:
                q.append((node.left, left, node.val))
            if node.right is not None:
                q.append((node.right, node.val, right))
            
        return True




        

