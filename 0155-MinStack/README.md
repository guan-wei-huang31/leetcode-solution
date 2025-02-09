# **Min Stack**

## **Problem Statement**
This project provides a solution for a Min Stack, a special stack that supports constant time retrieval of the minimum element. The stack supports the following operations:
 1. push(val): Push an integer onto the stack.
 2. pop(): Remove the top element from the stack.
 3. top(): Return the top element.
 4. getMin(): Retrieve the minimum element in constant time.  

**Example Input:**
  ```
  Input
  ["MinStack","push","push","push","getMin","pop","top","getMin"]
  [[],[-2],[0],[-3],[],[],[],[]]
  
  Output
  [null,null,null,null,-3,null,0,-2]
  
  Explanation
  MinStack minStack = new MinStack();
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  minStack.getMin(); // return -3
  minStack.pop();
  minStack.top();    // return 0
  minStack.getMin(); // return -2
  ```
---

## **Solutions Overview**
### **Two Stacks Approach (C++)**
1. Use two stacks:
   - s1: Stores all elements in stack order.
   - minStack: Maintains the minimum value at each step.
2. Push Operation:
   - Push val onto s1.
   - Push the minimum value so far onto minStack (val or minStack.top()).
3. Pop Operation:
   - Pop from both s1 and minStack.
4. Top Operation:
   - Return the top element of s1.
5. GetMin Operation:
   - Return the top element of minStack.
  
- Language: C++
- Code:
  ```
  class MinStack {
  private:
      stack<int>s1;
      stack<int>minStack;
  public:
  
  void push(int val) {
          s1.push(val);
          val = min(val, minStack.empty()?val:minStack.top());
          minStack.push(val);
      }
      
      void pop() {
          s1.pop();
          minStack.pop();
      }
      
      int top() {
          return s1.top();
      }
      
      int getMin() {
          return minStack.top();
      }
  };
  
  /**
   * Your MinStack object will be instantiated and called as such:
   * MinStack* obj = new MinStack();
   * obj->push(val);
   * obj->pop();
   * int param_3 = obj->top();
   * int param_4 = obj->getMin();
   */
  ```
  
- Time Complexity:  O(1)    
  All operations (push, pop, top, getMin) run in constant time.  
  
- Space Complexity: O(n)    
  Each element is stored twice (once in s1, once in minStack).  
  
---

## **Conclusion**
This two-stack approach ensures that getMin() runs in O(1) time while maintaining the correct stack order for push/pop operations. It is an optimal solution for tracking the minimum in a stack.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Explore alternative approaches (single-stack solution using pair<int, int>).
- Optimize space usage further by tracking changes dynamically.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
