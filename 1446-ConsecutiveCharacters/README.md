# **Consecutive Characters**

## **Problem Statement**
This project provides a solution to the Consecutive Characters (Maximum Power of a String) problem. Given a string s, the goal is to find the length of the longest contiguous substring that consists of the same character.  

**Example Input:**
  ```
  Input: s = "leetcode"
  Output: 2
  Explanation: The substring "ee" is of length 2 with the character 'e' only.
  ```
---

## **Solutions Overview**

### **String Single Pass Approach (C++)**
1. Initialize two variables:
   - result = 1 (tracks the max consecutive character streak).
   - sub = 1 (tracks the current streak length).
2. Iterate through s:
   - If s[i] == s[i-1], increment sub (streak continues).
   - Otherwise, reset sub = 1.
   - Update result = max(result, sub).
3. Return result, which stores the longest contiguous character streak.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int maxPower(string s) {
          int result = 1;
          int sub = 1;
          for (int i = 1; i < s.size(); i++){
              if (s[i] == s[i-1]){
                  sub++;
              }else{
                  sub = 1;
              }
              result = max(result, sub);
          }
          return result;
      }
  };
  ```
  
- Time Complexity:  O(n)  
  - The string is processed once, making it O(n) complexity.
- Space Complexity: O(1)
  - Only a few integer variables are used.
  
---

## **Conclusion**
- The one-pass approach (O(n)) is optimal for finding the longest contiguous character streak efficiently. 

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend the approach for Unicode characters (multi-byte encodings).
- Optimize performance for very large strings.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
