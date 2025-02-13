# **Longest Repeating Character Replacement**

## **Problem Statement**
This project provides a solution to the Longest Repeating Character Replacement problem. Given a string s and an integer k, the goal is to find the length of the longest substring that can be obtained by replacing at most k characters to make all characters the same.  
**Example Input:**
  ```
  Input: s = "ABAB", k = 2
  Output: 4
  Explanation: Replace the two 'A's with two 'B's or vice versa.
  ```
---

## **Solutions Overview**
### **Sliding Window with Hash Map Approach (C++)**
1. Use a frequency array (freq[26]) to track occurrences of characters in the current window.
2. Use a two-pointer sliding window:
   - Expand the right pointer (end) and update character frequency.
   - Track the most frequent character count (current_max) in the window.
   - If the number of replacements required (window_size - current_max) exceeds k, shrink the window by moving the left pointer (start).
   - Update the result to track the maximum valid window size.
3. Return result, which stores the longest valid substring length.


- Language: C++
- Code:
  ```
  class Solution {
  public:
      int characterReplacement(string s, int k) {
          vector<int>freq(26,0);
          int start = 0;
          int current_max = 0;
          int result = 0;
          for (int end = 0; end < s.size(); end++){
              current_max = max(current_max, ++freq[s[end]-'A']);
              if((end - start + 1) - current_max > k ){
                  freq[s[start]-'A']--;
                  start++;
              }
              result = max(result, (end - start + 1));
          }
          return result;
      }
  };
  ```

- Time Complexity: O(n)  
  - Each character is processed at most once, making the overall complexity O(n).
- Space Complexity: O(1)  
  - The frequency array has fixed size (26 letters), resulting in constant space usage.  
  
---

## **Conclusion**
This sliding window + frequency tracking method efficiently finds the longest substring after k replacements in O(n) time complexity, ensuring optimal performance.  

### **Future Plans**
- Add implementations in other languages, such as Java, Python.
- Extend to Unicode character replacements.
- Analyze performance with larger input sizes.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
