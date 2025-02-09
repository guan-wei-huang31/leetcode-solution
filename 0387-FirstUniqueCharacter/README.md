# **First Unique Character in a String**

## **Problem Statement**
This project demonstrates an efficient algorithm to find the index of the first non-repeating character in a string using Python. The solution uses the Counter class from the collections module to count the frequency of each character and then iterates through the string to find the first character with a count of 1.
**Example Input:**
  ```
  Input: s = "loveleetcode"  
  Output: 2
  ```
---

## **Solutions Overview**
### **Hash Map Approach (C++)**
1. Create a frequency array (freq[26]):
   - Count occurrences of each character in s.
2. Iterate through s:
   - Find the first character with freq[c - 'a'] == 1.
3. Return the index of the first unique character.
4. Return -1 if no unique character is found.

- Language: C++
- Code:
  ```
  class Solution {
  public:
      int firstUniqChar(string s) {
          vector<int> freq(26, 0);  
          
          for (char c : s) {
              freq[c - 'a']++;
          }
  
          for (int i = 0; i < s.size(); i++) {
              if (freq[s[i] - 'a'] == 1) return i;
          }
  
          return -1;
      }
  };
  ```

- Time Complexity: O(n)  
  - The string is processed twice, making it O(n) complexity.
- Space Complexity: O(1)
  - The frequency array has a fixed size (26 characters).

### **Frequency Counting Approach (Python)**
1. Character Frequency Count:
   - Use the Counter class from the collections module to compute the frequency of each character in the string.
2. Iterate Through the String: 
   - Loop through the characters in the string along with their indices.
   - Check if the frequency of the current character is 1.
   - Return the index of the first character that satisfies the condition.
3. Return -1 if No Unique Character Exists:
   - If no unique character is found after completing the loop, return -1.

- Language: Python
- Code:
  ```
  class Solution:
      def __init__(self):
          pass
  
      def firstUniqChar(self, s: str) -> int:
          counts = Counter(s)  # Count frequencies of each character
          for idx, chr in enumerate(s):
              if counts[chr] == 1:  # Check for unique character
                  return idx
          return -1  # No unique character found
  
  if __name__ == "__main__":
      solution = Solution()
      # Test example
      s = "loveleetcode"
      print(solution.firstUniqChar(s))  # Output: 2
  ```

- Time Complexity: O(n)
  O(n) for counting frequencies using Counter and another O(n) for iterating through the string, resulting in an overall O(n).
- Space Complexity: O(1)
  O(1) constant space for the Counter dictionary relative to the input size.
  
---

## **Conclusion**
The frequency array approach (O(n)) is the most efficient solution for English lowercase letters. The unordered map approach is an alternative that generalizes to larger character sets.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend the approach for Unicode character sets.
- Optimize for streaming input (real-time character processing).

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
