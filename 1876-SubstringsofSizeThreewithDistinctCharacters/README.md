# **Substrings of Size Three with Distinct Characters**

## **Problem Statement**
This project provides a solution to the Count Good Substrings of Size Three problem. Given a string s, the goal is to count the number of good substrings of length three, where a substring is good if all three characters are distinct.  


**Example Input:**
  ```
  Input: s = "xyzzaz"  
  Output: 1  
  Explanation: The only good substring is "xyz".
  ```
---

## **Solutions Overview**
### **Sliding Window with Hash Map Approach (C++)**
1. Use a frequency array (freq[26]) to track occurrences of characters in the current window.
2. Use a sliding window of size 3:
   - Expand the right pointer (end) and update character frequency.
   - If the window size exceeds 3, remove the leftmost character from the window and move the left pointer (start).
   - If the window size is exactly 3, check whether all three characters are distinct.
   - If distinct, increment the count.
3. Return count, which stores the number of good substrings.


- Language: C++
- Code:
  ```
  class Solution {
  public:
      int countGoodSubstrings(string s) {
          if (s.size() < 3) return 0; 
          
          vector<int> freq(26, 0);
          int count = 0;
          int start = 0;
  
          for (int end = 0; end < s.size(); end++) {
              freq[s[end] - 'a']++;
              
              if (end - start + 1 > 3) {
                  freq[s[start] - 'a']--;
                  start++;
              }
              if (end - start + 1 == 3 && 
                  freq[s[start] - 'a'] == 1 && 
                  freq[s[start + 1] - 'a'] == 1 && 
                  freq[s[start + 2] - 'a'] == 1) {
                  count++;
              }
          }
  
          return count;
      }
  };
  ```

- Time Complexity: O(n)  
  - Each character is processed at most once, making the overall complexity O(n).
- Space Complexity: O(1)  
  - The frequency array has fixed size (26 lowercase letters), resulting in constant space usage.
  
### **Single Pass Approach (Python)**
1. Instead of using a frequency array, we can directly check if characters in the window are unique.


- Language: Python
- Code:
  ```
  class Solution:
      def countGoodSubstrings(self, s: str) -> int:
          if len(s) < 3: return 0
          count = 0
          for i in range(len(s)-2):
              if(s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2]):
                  count+=1
          return count
  ```

- Time Complexity: O(n)  
  - Each character is processed at most once, making the overall complexity O(n).
- Space Complexity: O(1)  
  - No extra storage used
  
---

## **Conclusion**
This sliding window approach efficiently finds the number of good substrings in O(n) time complexity, ensuring optimal performance. The direct character check approach further simplifies the implementation.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend to larger substring sizes.
- Optimize for multi-character encodings (Unicode).

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
