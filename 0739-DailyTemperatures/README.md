# **Daily Temperatures**

## **Problem Statement**
This project provides a solution to the Daily Temperatures problem. Given an array temperatures, where temperatures[i] represents the daily temperature on day i, the goal is to return an array where each element represents the number of days until a warmer temperature appears.
If no future day has a warmer temperature, return 0 for that day.  

**Example Input:**
  ```
  Input: temperatures = [73,74,75,71,69,72,76,73]
  Output: [1,1,4,2,1,1,0,0]
  ```
---

## **Solutions Overview**
### **Stack Approach (C++)**
1. Initialize a stack (stk) that stores indices of temperatures in decreasing order.
2. Initialize a result array (result) of the same size as temperatures, filled with 0.
3. Iterate through the temperatures:
   - While the stack is not empty and temperatures[i] is greater than temperatures[stk.top()]:
     - Pop the index from stk.
     - Compute result[pre] = i - pre (difference in days).
   - Push the current index i onto the stack.
4. Return the result array.
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> dailyTemperatures(vector<int>& temperatures) {
          int n = temperatures.size();
          vector<int>result(n,0);
          stack<int>stk;
          for(int i = 0; i < n; i++){
              while(!stk.empty() && temperatures[i] > temperatures[stk.top()]){
                  int pre = stk.top();
                  result[pre] = i - pre;
                  stk.pop();
              }
              stk.push(i);
          }
          return result;
      }
  };
  ```
  
- Time Complexity:  O(n)      
  - Each temperature is processed once and pushed/popped from the stack at most once. 
  
- Space Complexity: O(n)    
  - The worst-case scenario stores all temperatures in the stack.   
  
---

## **Conclusion**
This monotonic stack approach efficiently computes the number of days until a warmer temperature in O(n) time complexity while keeping space usage minimal.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Optimize memory usage with constant space alternatives.
- Extend the approach to similar problems (e.g., next greater element in arrays). 

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
