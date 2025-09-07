# **Subtree of Another Tree**

## **Problem Statement**
This project provides a Python implementation of the Subtree of Another Tree problem (LeetCode 572).
Given the roots of two binary trees root and subRoot, return true if subRoot is a subtree of root, and false otherwise.

A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node’s descendants. The tree tree could also be considered as a subtree of itself.


**Example Input:**
  ```
  Input: root = [3,4,5,1,2], subRoot = [4,1,2]  
  Output: true
  ```
---

## **Solutions Overview**
### **Recursive Tree Comparison Approach (Python)**
1. Check equality function (isSameTree)
  - Compare two trees node by node.
  - Return True if both trees are identical in structure and values.
  - Return False if any mismatch is found.
2. Helper function (helper)
  - Traverse the main tree (root).
  - At each node, check whether the subtree rooted at this node is the same as subRoot using isSameTree.
  - Recursively search the left and right children if not matched.
3. Final check (isSubtree)
  - Call the helper function starting from the root.

- Language: Python
- Code:
  ```
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
  ```
  
- Time Complexity: O(m × n) in the worst case
  (where m is the number of nodes in root and n is the number of nodes in subRoot). Each node in root may trigger a comparison with the entire subRoot.
- Space Complexity: O(h)
  (where h is the height of root, due to recursion stack usage).
  
---

## **Conclusion**
This recursive solution efficiently checks whether one tree is a subtree of another by combining a tree equality check with a traversal of the main tree.
The implementation prioritizes clarity and correctness, leveraging recursion for both comparison and traversal.


### **Future Plans**
- Extend with iterative or serialization-based approaches (string representation using preorder traversal)..
- Add automated unit tests with edge cases (empty tree, single-node tree).
- Optimize for large trees by pruning unnecessary recursive checks.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
