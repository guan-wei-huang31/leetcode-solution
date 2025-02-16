# **Count Odd Numbers in an Interval Range**

## **Problem Statement**
This project provides a solution to the Count Odd Numbers in an Interval Range problem. Given two integers low and high, the goal is to count how many odd numbers exist between low and high (inclusive).  

**Example Input:**
  ```
  Input: low = 3, high = 7
  Output: 3
  Explanation: The odd numbers between 3 and 7 are [3,5,7].
  ```
---

## **Solutions Overview**

### **Math Approach (C++)**
1. the formula can be optimized using math.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int countOdds(int low, int high) {
          return (high + 1) / 2 - (low / 2);
      }
  };
  ```
  
- Time Complexity:  O(1)  
- Space Complexity: O(1)

  
---

## **Conclusion**
- The mathematical formula (O(1)) efficiently computes the number of odd numbers in the given range without iteration.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend the approach for different number ranges (negative numbers, floating-point).
- Optimize for very large inputs.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
