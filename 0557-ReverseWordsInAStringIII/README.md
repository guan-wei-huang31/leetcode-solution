# **Reverse Words in a String III**

## **Problem Statement**
This project demonstrates an algorithm to reverse the characters in each word of a given string while maintaining the original word order. The solution is implemented in Python and efficiently handles word splitting, character reversal, and string reconstruction.

**Example Input:**
  ```
  Input: s = "Let's reverse words"
  Output: "s'teL esrever sdrow"
  ```
---

## **Solutions Overview**
### **Iterative Approach (Python)**
1. Split the String:
   - Use the split(" ") function to separate the string into a list of words.
2. Reverse Characters in Each Word:
   - For each word, use a two-pointer approach (left and right) to reverse the characters in place.
3. Reconstruct the String:
   - Join the reversed words using " ".join() to reconstruct the final output string.
4. Return the Result:
   - Output the reconstructed string with the characters in each word reversed.

- Language: Python
- Code:
  ```
  class Solution:
      def reverseWords(self, s: str) -> str:
          slist = s.split(" ")
          for i in range(len(slist)):
              left = 0
              right = len(slist[i]) - 1
              sub = list(slist[i])
              while left < right:
                  sub[left], sub[right] = sub[right], sub[left]
                  left += 1
                  right -= 1
              slist[i] = "".join(sub)
          return " ".join(slist)
  ```

- Time Complexity: O(n)
  O(n), The algorithm processes each character in the string once, where n is the total number of characters.
- Space Complexity: O(n)
  O(n) The split and reconstruction processes require additional space proportional to the input string size.
  
---

## **Conclusion**
This algorithm efficiently reverses the characters in each word of a string, achieving a time complexity of O(n) and a space complexity of O(n). Its straightforward implementation makes it suitable for scenarios where real-time text processing is required.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Experiment with alternative algorithms to see if a single-pass solution could offer further performance improvements.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
