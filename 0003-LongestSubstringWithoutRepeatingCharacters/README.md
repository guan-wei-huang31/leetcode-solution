# **Longest Substring Without Repeating Characters**

## **Problem Statement**
This project provides a solution to the Longest Substring Without Repeating Characters problem. Given a string s, the goal is to find the length of the longest substring that contains no repeating characters.  

  
**Example Input:**
  ```
  Input: s = "abcabcbb"
  Output: 3
  Explanation: The answer is "abc", with the length of 3.
  ```
---

## **Solutions Overview**
### **Sliding Window with Hash Map Approach (Python Language)**
1. Initialize a left pointer (left) at the beginning of the string.
2. Use a dictionary (dic) to store the last seen index of each character.
3. Iterate through the string (s):
   - If s[i] is already in dic and within the current window, update left to max(left, dic[s[i]] + 1).
   - Update max_length as max(max_length, i - left + 1).
   - Store dic[s[i]] = i (update the character's last seen position).
4. Return max_length, which holds the length of the longest substring.  

- Language: Python
- Code:
  ```
  class Solution:
      def lengthOfLongestSubstring(self, s: str) -> int:
          if len(s) == 0: return 0
          left = 0
          dic = {}
          max_length = 1
          for i in range(len(s)):
              if s[i] in dic:
                  left = max(left, dic[s[i]] + 1)
              max_length = max(max_length, i - left + 1)
              dic[s[i]] = i
          return max_length
  ```
- Time Complexity: O(n)  
  - Each character is processed at most once, making it linear time.
- Space Complexity: O(min(n, 26)) ≈ O(1) 
  - The dictionary stores at most 26 lowercase letters (or O(n) for larger character sets).

---

## **Conclusion**
This sliding window approach efficiently finds the longest substring without repeating characters in O(n) time complexity, ensuring optimal performance.  

### **Future Plans**
- Add more solutions using other languages like Java or C++.
- Optimize further for multi-character encodings (Unicode).
- Extend to variations (e.g., k-character distinct substrings).

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
