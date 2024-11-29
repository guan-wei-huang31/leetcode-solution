# **Palindrome Number**

## **Problem Statement**
Given an integer x, return true if x is a palindrome integer, and false otherwise.
A palindrome is a number that reads the same backward as forward. For example:  
  - 121 is a palindrome.  
  - -121 is not a palindrome because the - sign disrupts the symmetry.
  
**Example Input:**
  ```
  Input: x = 121
  Output: True
  
  Input: x = -121
  Output: False

  ```
---

## **Solutions Overview**
### **Solution 1: Two-Pointer Approach (Python Language)**
This solution converts the number into a string, then uses two pointers to compare characters from the start and end of the string.  

- Language: Python
- Code:
  ```
  class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        num = str(x)
        point_l = 0
        point_r = len(num) - 1
        while point_l < point_r:
            if num[point_l] != num[point_r]:
                return False
            else:
                point_l += 1
                point_r -= 1
        return True
  ```
- Time Complexity: O(n)  
  The string is traversed once, where n is the number of digits in x.
- Space Complexity: O(1)  
  The integer x is converted to a string, which uses additional memory proportional to its length.

---

## **Conclusion**
Two-Pointer Approach is intuitive and simple but uses additional space to store the string representation of the number.  

### **Future Plans**
- Add more solutions using other languages like Java or JavaScript.
- Implement unit tests to verify correctness.
- Optimize memory usage in the C solution.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
