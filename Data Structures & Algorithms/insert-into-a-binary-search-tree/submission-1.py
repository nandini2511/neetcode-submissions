# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        cur = root

        if not cur:
            return TreeNode(val)

        while True:
            if val < cur.val:
                if cur.left is None:
                    cur.left = TreeNode(val)
                    return root
                cur = cur.left
            else:
                if cur.right is None:
                    cur.right = TreeNode(val)
                    return root
                cur = cur.right
            
            


        
        
        