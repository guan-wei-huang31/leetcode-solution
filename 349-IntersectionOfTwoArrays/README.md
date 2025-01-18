# **Find Common Characters**

## **Problem Statement**
This project provides a solution to find all common characters in an array of strings. Each common character must appear the minimum number of times it occurs in all strings.

**Example Input:**
  ```
  Input: words = ["bella", "label", "roller"]
  Output: ["e", "l", "l"]
  ```
---

## **Solutions Overview**
### **Hash Map Approach (C++)**
1. Check if the first string is empty. If yes, return an empty result.
2. Create a hash map (array) to store the frequency of each character in the first string.
3. For each subsequent string:
   - Create a temporary hash map to store character frequencies.
   - Update the original hash map to store the minimum frequency of each character across all strings.
4. Traverse the final hash map to generate the result:
   - For each non-zero frequency, append the character to the result as many times as it occurs.
     
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<string> commonChars(vector<string>& words) {
          vector<string> result;
          if (words[0].size() == 0) {
              return result;
          }
          int hashmap1[26]{};
          for (char c : words[0]) {
              hashmap1[c - 'a']++;
          }
          for (int i = 1; i < words.size(); i++) {
              int hashmap2[26]{};
              for (char c : words[i]) {
                  hashmap2[c - 'a']++;
              }
              for (int k = 0; k < 26; k++) {
                  hashmap1[k] = min(hashmap1[k], hashmap2[k]);
              }
          }

          for (int i = 0; i < 26; i++) {
              while (hashmap1[i] != 0) { 
                  result.push_back(string(1, i + 'a'));
                  hashmap1[i]--;
              }
          }
          return result;
      }
  };
  ```
  
- Time Complexity: O(n * m)  
  - `n` is the number of strings.
  - `m` is the average length of the strings.
- Space Complexity: O(1)  
  - The hash maps use fixed space of size 26 for each character in the alphabet.
---

## **Conclusion**
This approach effectively determines the common characters among multiple strings, ensuring the minimum occurrence of each character is preserved. Its linear complexity relative to the input size makes it suitable for most practical scenarios.
  
### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
