# **Evaluate Reverse Polish Notation**

## **Problem Statement**
This project provides a solution to evaluate an expression in Reverse Polish Notation (RPN). Given a list of tokens representing a valid RPN expression, return the result of the expression.  
  

**Example Input:**
  ```
  Input: tokens = ["2","1","+","3","*"]
  Output: 9
  Explanation: ((2 + 1) * 3) = 9
  ```
---

## **Solutions Overview**
### **Stack Approach (C++)**
1. Use a stack (stk) to store intermediate results.
2. Iterate through each token in tokens:
   - If the token is a number, convert it to an integer and push it onto the stack.
   - If the token is an operator (+, -, *, /):
     - Pop the top two elements from the stack (a, b).
     - Perform the operation (b operator a) and push the result back onto the stack.
3. Return the final result (the only element left in the stack).
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int evalRPN(vector<string>& tokens) {
          stack<int>stk;
          int result = 0;
          for (auto num : tokens){
              if (isdigit(num[0]) || (num[0] == '-' && num.size() > 1)) {  
                  stk.push(stoi(num));
              }else{
                  result = stk.top();
                  stk.pop();
                  int b = stk.top();
                  stk.pop();
                  if (num == "+") stk.push(b + result);
                  else if (num == "-") stk.push(b - result);
                  else if (num == "*") stk.push(b * result);
                  else stk.push(b / result);
              }
          }
          return stk.top();
      }
  };
  ```
  
- Time Complexity:  O(n)      
  Each token is processed once, making the overall complexity O(n).  
  
- Space Complexity: O(n)    
  In the worst case, the stack can store all numbers, leading to O(n) space usage.   
  
---

## **Conclusion**
This stack-based solution efficiently evaluates Reverse Polish Notation expressions in O(n) time complexity while keeping space usage minimal.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Extend support for additional operators (e.g., exponentiation).
- Optimize handling of large numbers and edge cases (e.g., division by zero).  

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
