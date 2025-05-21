# **Maximum Depth of Binary Tree**

## **Problem Statement**
This project provides a solution to find the maximum depth of a binary tree.
The maximum depth is defined as the number of nodes along the longest path from the root node down to the farthest leaf node. 

**Example Input:**
  ```
  Input:
      3
     / \
    9  20
       / \
      15  7
  
  Output:
      3
  ```
---

## **Solutions Overview**
### **Recursive Approach DFS (Python)**
1. Base Case:
   - If the current node is None, return 0 (an empty tree has depth 0).
2. Recursive Calls:
   - Recursively compute the maximum depth of the left and right subtrees.
3. Combine Results:
   - The maximum depth of the current node is 1 + max(left depth, right depth).
4. Return Result:
   - Return the computed depth up the recursive call stack.
   
- Language: Python
- Code:
  ```
  from typing import Optional
  
  # Definition for a binary tree node.
  class TreeNode:
      def __init__(self, val=0, left=None, right=None):
          self.val = val
          self.left = left
          self.right = right
  
  class Solution:
      def maxDepth(self, root: Optional[TreeNode]) -> int:
          if root is None:
              return 0
          return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
  ```

- Time Complexity: O(n)   
  Every node in the tree is visited exactly once, where n is the number of nodes.
- Space Complexity: O(h)   
  The space complexity depends on the height of the tree h due to recursion stack usage.
  
---

## **Conclusion**
This recursive solution efficiently calculates the maximum depth of a binary tree.
It performs well for most trees, but like all recursive methods, it may face recursion depth limits on extremely unbalanced trees.
### **Future Plans**
- Add iterative BFS-based implementation using a queue.
- Implement versions in other programming languages like Java or C++.
- Add unit tests to validate against edge cases and deep unbalanced trees
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
