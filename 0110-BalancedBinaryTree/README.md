# **Balanced Binary Tree**

## **Problem Statement**
This project provides a Python implementation of the Balanced Binary Tree problem (LeetCode 110).
Given the root of a binary tree, determine if it is height-balanced.

A height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differs by more than one.  

**Example Input:**
  ```
  Input: root = [3,9,20,null,null,15,7]
  Output: true
  ```
---

## **Solutions Overview**
### **Recursive Height Checking Approach (Python)**
1. Height function with balance check (height)
   - If the subtree is empty, return height = 0.
   - Recursively compute the height of left and right subtrees.
   - If either subtree is unbalanced, return -1 immediately (propagating failure upwards).
   - If the difference between left and right heights is greater than 1, return -1.
   - Otherwise, return the valid height (max(left, right) + 1).
2. Main function (isBalanced)
   - Calls height(root) and checks if result is -1.
   - Returns True if balanced, False otherwise.

- Language: Python
- Code:
  ```
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
  ```
  
- Time Complexity: O(n)  
  (where n is the number of nodes in the tree, since each node is visited once).  
- Space Complexity: O(h)  
  (where h is the height of the tree, due to recursion stack usage).  
  
---

## **Conclusion**
This solution efficiently checks if a binary tree is balanced by combining height calculation with early stopping when imbalance is detected. It avoids redundant recomputation and ensures an O(n) runtime.  

### **Future Plans**
- Add an iterative solution using BFS to check balance level by level.
- Create unit tests to validate edge cases (e.g., empty tree, skewed tree, large balanced tree).
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
