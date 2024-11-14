# **Valid Anagram**

## **Problem Statement**
This project provides a solution to determine if two given strings are anagrams. Two strings are considered anagrams if one can be formed by rearranging the letters of the other, using each letter exactly once.

**Example Input:**
  ```
  Input: s = "listen", t = "silent"
  Output: True
  ```
---

## **Solutions Overview**
### **Single-Pass Dictionary Approach (Python)**
1. Initialize a dictionary to store the frequency of each character in the first string.
2. Traverse through each character in the first string and update the count in the dictionary.
3. Traverse through each character in the second string:
   - If a character is not found in the dictionary or its count goes below zero, return False
4. After traversing both strings, if all counts are balanced (i.e., all are zero), return True.
   
- Language: Python
- Code:
  ```
  class Solution:
      def isAnagram(self, s: str, t: str) -> bool:
          dic = {}
          if len(s) != len(t):
              return False
          for num in s:
              dic[num] = dic.get(num, 0) + 1
          for tnum in t:
              if tnum not in dic:
                  return False
              dic[tnum] -= 1
              if dic[tnum] < 0:
                  return False
          return True
  
  ```

- Time Complexity: O(n)
  The algorithm traverses each string once, resulting in a linear time complexity.
- Space Complexity: O(n)
  The dictionary requires space to store the count for each unique character in the string.

---

## **Conclusion**
This dictionary-based approach efficiently checks for anagrams by counting character occurrences in one pass through each string. The solution is simple, effective, and well-suited for the given problem constraints.

### **Future Plans**
- Add implementations in other languages, such as C++, Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
