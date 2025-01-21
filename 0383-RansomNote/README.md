# **Ransom Note**

## **Problem Statement**
The goal of this project is to determine if a ransom note can be constructed using the characters from a given magazine string. Each character in the magazine can only be used once. The function takes two input strings: `ransomNote` and `magazine`, and returns `true` if the ransom note can be constructed, otherwise returns `false`.

**Example Input:**
  ```
  Input: ransomNote = "a", magazine = "b"
  Output: false

  Input: ransomNote = "aa", magazine = "ab"
  Output: false

  Input: ransomNote = "aa", magazine = "aab"
  Output: true
  ```
---

## **Solutions Overview**
### **Hashmap Approach (C++)**
The hashmap approach efficiently counts the occurrences of each character in the `ransomNote` and `magazine` strings to determine if the note can be constructed.
  1. Create an integer array of size 26 to store the frequency of characters.
  2. Traverse the `ransomNote` string and increment the frequency for each character.
  3. Traverse the `magazine` string and decrement the frequency.
  4. If any value in the frequency array is greater than zero, return `false`.
  5. Otherwise, return `true`.  
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      bool canConstruct(string ransomNote, string magazine) {
          int hashmap[26]{};
          if (magazine.length() < ransomNote.length()) return false;
          for (int i = 0; i < ransomNote.length(); i++) {
              hashmap[ransomNote[i] - 'a']++;
          }
          for (int i = 0; i < magazine.length(); i++) {
              hashmap[magazine[i] - 'a']--;
          }
          for (int i = 0; i < 26; i++) {
              if (hashmap[i] > 0) {
                  return false;
              }
          }
          return true;
      }
  };
  ```
  
- Time Complexity: O(m + n)  
  m is ransomNote length, and n is magazine length. 
  Each character is processed once, making the solution linear in time complexity.  

- Space Complexity: O(1)  
  The solution uses a fixed-size array for frequency counting.  
  
---

## **Conclusion**
The hashmap approach is an efficient solution for the "Ransom Note" problem. It handles edge cases and ensures optimal performance with linear time complexity and constant space complexity.

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
