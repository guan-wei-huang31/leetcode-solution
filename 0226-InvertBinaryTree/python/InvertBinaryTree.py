from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def __repr__(self):

        return f"TreeNode({self.val})"

def build_tree():
    #       4
    #      / \
    #     2   7
    #    / \ / \
    #   1  3 6  9
    root = TreeNode(4)
    root.left = TreeNode(2, TreeNode(1), TreeNode(3))
    root.right = TreeNode(7, TreeNode(6), TreeNode(9))
    return root

if __name__ == "__main__":

    tree = build_tree()
    print("Before inversion:")
    print(tree)

    solution = Solution()
    inverted_tree = solution.invertTree(tree)

    print("After inversion:")
    print(inverted_tree)
