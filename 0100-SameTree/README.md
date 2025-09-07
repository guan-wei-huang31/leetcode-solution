# **Same Tree**

## **Problem Statement**
This project provides a Python implementation of the Same Tree problem (LeetCode 100).
Given the roots of two binary trees p and q, determine if they are the same.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.


**Example Input:**
  ```
  Input: p = [1,2,3], q = [1,2,3]
  Output: true
  ```
---

## **Solutions Overview**
### **Recursive Tree Comparison Approach (Python)**
1. Base cases:
   - If both nodes are None, return True.
   - If one is None but the other is not, return False.
2. Value check:
   - If the values of the two nodes differ, return False.
3. Recursive step:
   - Recursively check the left subtrees and right subtrees.
   - Return True only if both are identical.

- Language: Python
- Code:
  ```
  class Solution:
      def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
          if not p and not q:
              return True
          if not p or not q:
              return False
          if p.val != q.val:
              return False
          return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
  ```
  
- Time Complexity: O(n)  
  (where n is the number of nodes in the smaller tree, since each node is visited once).  
- Space Complexity: O(h)  
  (where h is the height of the tree, due to recursion stack usage).  
  
---

## **Conclusion**
This recursive solution provides a clear and efficient way to check whether two binary trees are the same. By comparing values and structure simultaneously, the algorithm ensures correctness in all cases.  

### **Future Plans**
- Extend with an iterative solution using BFS or DFS with a queue/stack.
- Add unit tests to validate special cases (e.g., empty trees, single-node trees, trees with different depths).
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
