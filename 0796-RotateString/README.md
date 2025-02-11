# **Rotate String**

## **Problem Statement**
This project provides a solution to the Rotate String problem. Given two strings s and goal, determine whether s can be rotated to match goal.

A rotation means shifting characters circularly to the left.
For example, "abcde" can be rotated to "bcdea", "cdeab", etc.  

**Example Input:**
  ```
  Input: s = "abcde", goal = "cdeab"
  Output: true

  ```
---

## **Solutions Overview**

### **String Approach (C++)**
1. Check string lengths:
   - If s and goal have different lengths, return false (impossible to rotate).
2. Concatenate s + s:
   - If goal is a valid rotation of s, it must appear as a substring in (s + s).
   - Use .find(goal) != string::npos to check for the presence of goal in (s + s).
3. Return true if found, otherwise return false.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      bool rotateString(string s, string goal) {
          return s.size() == goal.size() && (s+s).find(goal) != string::npos;
      }
  };
  ```
  
- Time Complexity: O(n)  
  - Concatenation takes O(n).
  - Substring search (find()) takes O(n) using KMP (Knuth-Morris-Pratt) or Boyer-Moore.
  - Total complexity: O(n).
- Space Complexity: O(n)
  - The concatenated string s + s requires O(n) extra space.
---

## **Conclusion**
The concatenation + substring search approach is the optimal solution, running in O(n) time complexity. The brute-force rotation method is slower (O(n²)) and should be avoided for large inputs.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Optimize for different string-matching algorithms (KMP, Rabin-Karp).
- Extend the approach to cyclic permutations in arrays.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
