# **Valid Parentheses**

## **Problem Statement**
Given a string s containing only the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid. An input string is valid if:  
  - Open brackets must be closed by the same type of brackets.
  - Open brackets must be closed in the correct order.
**Example Input:**
  ```
  Input: s = "([])"
  Output: True
  ```
---

## **Solutions Overview**
### **Solution 1: Stack-Based Approach  (Python Language)**
This solution uses a stack data structure to ensure proper nesting and order of brackets:  
 1. Traverse the string s character by character.
 2. If the character is an opening bracket, push it onto the stack.
 3. If the character is a closing bracket, check if it matches the top element of the stack:
    - If it matches, pop the top element from the stack.  
	- If it doesn't match or the stack is empty, return False.
 4. After processing all characters, check if the stack is empty. If it is, the string is valid; otherwise, it is invalid.  
 
- Language: Python
- Code:
  ```
  class Solution:
      def isValid(self, s: str) -> bool:
          close_to_open = {")": "(", "}": "{", "]": "["}
          stack = []
  
          for c in s:
              if c not in close_to_open:  # It's an opening bracket
                  stack.append(c)
              else:  # It's a closing bracket
                  if stack and stack[-1] == close_to_open[c]:
                      stack.pop()  # Valid match, remove from stack
                  else:
                      return False  # Invalid match
          return stack == []  # Ensure stack is empty
  ```
- Time Complexity: O(n)   
  The string s is traversed once, and each operation (push or pop) on the stack is O(1).
- Space Complexity: O(n)  
  In the worst case, all characters in the string could be opening brackets, requiring space proportional to the input size.


---

## **Conclusion**
The stack-based approach is efficient and intuitive for solving the valid parentheses problem. It leverages the Last-In-First-Out (LIFO) behavior of stacks to validate the order and type of brackets.  

### **Future Plans**
- Add more solutions using other languages like Java or JavaScript.
- Implement unit tests to verify correctness.
- Optimize memory usage in the C solution.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
