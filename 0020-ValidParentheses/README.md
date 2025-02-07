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
### **Stack-Based Approach  (Python Language)**
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

### **Stack-Based Approach  (C++ Language)**
1. Use an unordered map (map_close) to store closing brackets as keys and their corresponding opening brackets as values.
2. Use a stack (st) to track unmatched opening brackets.
3. Iterate through the string s:
   - If e is an opening bracket ('(', '{', '['), push it onto the stack.
   - If e is a closing bracket (')', '}', ']'):
     - If the stack is empty or the top of the stack does not match the expected opening bracket, return false.
     - Otherwise, pop the stack.
4. Return true if the stack is empty, indicating all brackets are correctly matched.  

- Language: C++
- Code:
  ```
  class Solution {
  public:
      bool isValid(string s) {
          unordered_map<char, char> map_close = {{')', '('}, {'}', '{'}, {']', '['}};
          stack<char>st;
          for (auto e : s){
              if(!map_close.count(e)){
                  st.push(e);
              }else{
                  if (st.empty() || map_close[e] != st.top()){
                      return false;
                  }
                  st.pop();
              }
          }
          return st.empty();
      }
  };
  ```
- Time Complexity: O(n)   
  Each character is pushed and popped at most once, leading to linear complexity.
- Space Complexity: O(n)  
  In the worst case (all opening brackets), the stack stores n elements.  

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
