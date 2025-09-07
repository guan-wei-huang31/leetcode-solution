# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def isSameTree(major, sub):
            if not major and not sub:
                return True
            if not major or not sub:
                return False
            if major.val != sub.val:
                return False
            return isSameTree(major.left, sub.left) and isSameTree(major.right, sub.right)
        def helper(major, sub):
            if not major:
                return False
            if isSameTree(major, sub):
                return True
            return helper(major.left, sub) or helper(major.right, sub)
        return helper(root, subRoot)