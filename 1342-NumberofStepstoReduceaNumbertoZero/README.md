# **Number of Steps to Reduce a Number to Zero**

## **Problem Statement**
This project provides a solution to the Find Numbers with Even Number of Digits problem. Given an array nums, the goal is to count how many numbers in nums contain an even number of digits.  
  

**Example Input:**
  ```
  Input: num = 14
  Output: 6
  Explanation: 
  Step 1) 14 is even; divide by 2 and obtain 7. 
  Step 2) 7 is odd; subtract 1 and obtain 6.
  Step 3) 6 is even; divide by 2 and obtain 3. 
  Step 4) 3 is odd; subtract 1 and obtain 2. 
  Step 5) 2 is even; divide by 2 and obtain 1. 
  Step 6) 1 is odd; subtract 1 and obtain 0.
  ```
---

## **Solutions Overview**

### **Bitwise Approach (C++)**
1. Initialize count = 0 to track the steps.
2. Use a while loop until num becomes 0:
   - If num is even, divide by 2 using bitwise right shift (num >> 1).
   - If num is odd, subtract 1.
   - Increment the step counter (count).
3. Return count, which stores the total steps.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int numberOfSteps(int num) {
          int count = 0;
          while (num > 0) {
              num = (num % 2 == 0) ? (num >> 1) : (num - 1);
              count++;
          }
          return count;
      }
  };
  ```
  
- Time Complexity:  O(log n)  
  - Each division by 2 reduces num exponentially.
The number of steps is approximately O(log n).
- Space Complexity: O(1)
  - No extra storage is used apart from a few integer variables.
  
---

## **Conclusion**
- The bitwise approach is efficient and minimizes operations by using right shifts instead of division. 

### **Future Plans**
- Add implementations in other languages, such as Java.
- Optimize further using hardware-level bit manipulations.
- Extend to parallel reductions in large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
