# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        return self.height(root) != -1
    
    def height(self, subtree) -> int:
        if not subtree:
            return 0
        left = self.height(subtree.left)
        if left == -1:
            return -1
        right = self.height(subtree.right)
        if right == -1:
            return -1
        
        if abs(left - right) > 1:
            return -1
        return max(left, right) + 1