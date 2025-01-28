# **Invert Binary Tree**

## **Problem Statement**
This project provides a solution to invert a binary tree. Inversion involves swapping the left and right child nodes of all nodes in the tree recursively.  

**Example Input:**
  ```
  Input: 
      4
     / \
    2   7
   / \ / \
  1  3 6  9
  
  Output: 
      4
     / \
    7   2
   / \ / \
  9  6 3  1

  ```
---

## **Solutions Overview**
### **Recursive Approach (Python)**
1. Base Case:  
   If the current node is None, return None (end recursion).
2. Swap Children:  
   Swap the left and right child nodes of the current node.
3. Recursive Calls:  
   Recursively call the function for the left and right children after swapping.
4. Return Root:  
   Return the current root node once the entire tree has been processed.
   
- Language: Python
- Code:
  ```
  from typing import Optional
  
  class TreeNode:
      def __init__(self, val=0, left=None, right=None):
          self.val = val
          self.left = left
          self.right = right
  
  class Solution:
      def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
          if not root:
              return None
          
          # Swap the left and right children
          root.left, root.right = root.right, root.left
          
          # Recursively invert the left and right subtrees
          self.invertTree(root.left)
          self.invertTree(root.right)
          
          return root
  ```

- Time Complexity: O(n)   
  Each node is visited exactly once during the recursion. 
- Space Complexity: O(h)   
  The space complexity is determined by the recursion stack, which can be up to the height of the tree h. 
  
---

## **Conclusion**
This solution effectively inverts a binary tree using a recursive approach. It is optimal for balanced binary trees but may encounter stack overflow issues for highly unbalanced trees due to recursion depth.  

### **Future Plans**
- Add implementations in other languages, such as Python, Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
