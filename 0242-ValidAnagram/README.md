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

### **Hash Map Approach (C++)**
1. Check if the lengths of the two strings are different. If yes, return `false`.
2. Create a fixed-size integer array (acting as a hash map) to count occurrences of each character in the first string.
3. Traverse through the first string to increment the counts in the hash map.
4. Traverse through the second string to decrement the counts in the hash map:
   - If any count goes negative, return `false`.
5. Finally, ensure all counts in the hash map are zero. If true, return `true`.  

- Language: C++
- Code:
  ```
  #include <iostream>
  #include <string>
  using namespace std;

  class Solution {
  public:
      bool isAnagram(string s, string t) {
          if (s.length() != t.length()) {
              return false;
          }
          int map[26]{};
          for (int i = 0; i < s.length(); i++) {
              map[s[i] - 'a']++;
          }
          for (int i = 0; i < t.length(); i++) {
              map[t[i] - 'a']--;
              if (map[t[i] - 'a'] < 0) {
                  return false;
              }
          }
          return true;
      }
  };
  ```
  
- Time Complexity: O(n)  
  The algorithm iterates over each string once, resulting in linear time complexity.
- Space Complexity: O(1)  
  The hash map is a fixed-size array of 26 integers, regardless of input size.
---

## **Conclusion**
Both the dictionary-based Python solution and the hash map-based C++ solution provide efficient methods to determine if two strings are anagrams. The Python version is more dynamic and can handle Unicode characters with additional modifications, while the C++ version is optimized for lower-level operations with fixed ASCII assumptions.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
