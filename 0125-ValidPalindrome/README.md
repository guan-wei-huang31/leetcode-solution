# **Valid Palindrome**

## **Problem Statement**
This project provides a simple solution to check whether a given string is a palindrome. A palindrome is a word, phrase, or sequence of characters that reads the same forward and backward, ignoring non-alphanumeric characters and case sensitivity.

The program is written in C++, demonstrating the use of character handling functions and string manipulation.

**Example Input:**
  ```
  Input: string str = "A man, a plan, a canal: Panama"
  Output: True
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C/C++)**
This solution uses two pointers: one (ptr_l) starting from the left and another (ptr_r) starting from the right. The goal is to compare characters while ignoring non-alphanumeric characters and ensuring case-insensitive matching. The pointers move towards each other, checking for mismatches along the way.
- Language: C
- Code:
  ```
  #include <stdio.h>
  #include <stdbool.h> 
  #include <ctype.h>   
  #include <string.h>
  
  bool isPalindrome(char* s) {
      int ptr_l = 0;
      int ptr_r = strlen(s) - 1;
      while (ptr_l < ptr_r) {
          while (ptr_l < ptr_r && !isalnum(s[ptr_l])) {
              ptr_l++;
          }
          while (ptr_l < ptr_r && !isalnum(s[ptr_r])) {
              ptr_r--;
          }
          if (tolower(s[ptr_l]) != tolower(s[ptr_r])) {
              return false;
          }
          ptr_l++;
          ptr_r--;
      }
      return true;
  }
  ```

- Language: C++
- Code:
  ```
  #include <iostream>
  #include <cctype>
  #include <string>
  using namespace std;
  
  class Solution {
  public:
      bool isPalindrome(string s) {
          int ptr_l = 0;
          int ptr_r = s.length() - 1;
          while (ptr_l < ptr_r) {
              while (ptr_l < ptr_r && !isalnum(s[ptr_l])) {
                  ptr_l++;
              }
              while (ptr_l < ptr_r && !isalnum(s[ptr_r])) {
                  ptr_r--;
              }
              if (tolower(s[ptr_l]) != tolower(s[ptr_r])) {
                  return false;
              }
              ptr_l++;
              ptr_r--;
          }
          return true; 
          }
  };
  ```
- Time Complexity: O(n)
  Each character in the string is processed at most once, where n is the length of the input string.
- Space Complexity: O(1)
  The algorithm uses constant space, as it performs the checks in-place without allocating extra space proportional to the input size.

---

## **Conclusion**
This two-pointer approach efficiently checks if a string is a palindrome with linear time complexity. It skips non-alphanumeric characters and performs case-insensitive comparison, making it robust for real-world inputs.

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Optimize the solution further by experimenting with alternative algorithms for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
