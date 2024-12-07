# **Reverse String II**

## **Problem Statement**
This project demonstrates an efficient algorithm to reverse specific segments of a string based on a given integer k. The solution alternates between reversing the first k characters in every 2k segment of the string while leaving the rest as-is, ensuring efficient in-place reversal.
  
**Example Input:**
  ```
  Input: s = "abcdefghij", k = 2  
  Output: "bacdfeghji"  
  ```
---

## **Solutions Overview**
### **Iterative Approach (Python)**
1. Convert String to List:
   - Since strings are immutable in Python, convert the input string s into a list slist for in-place modifications.  
2. Segment-wise Processing: 
   - Iterate through the string in increments of 2k.  
   - Reverse the first k characters of each segment while ensuring boundaries are respected.  
3. Two-pointer Swap:
   - Use two pointers (l and r) to reverse characters within the specified range.  
   - Increment l and decrement r until the pointers meet.
4. Rejoin the List:
   - After processing all segments, rejoin the list slist back into a string and return the result.  

- Language: Python
- Code:
  ```
  class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        slist = list(s)
        for i in range(0, len(s), 2 * k):
            l = i
            r = min(i + k - 1, len(slist) - 1)
            while l < r:
                slist[l], slist[r] = slist[r], slist[l]
                l += 1
                r -= 1
        return ''.join(slist)
  ```

- Time Complexity: O(n)  
  O(n), where n is the length of the string. Each character is processed at most once.  
- Space Complexity: O(1)  
  O(n), as a list copy of the string is created for in-place modifications.
  
---

## **Conclusion**
This algorithm efficiently reverses specific segments of a string based on the provided parameter k, achieving O(n) time complexity and O(n) space complexity due to list conversion. Its design is simple yet powerful, making it ideal for practical scenarios where partial string manipulation is needed.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Experiment with alternative algorithms to see if a single-pass solution could offer further performance improvements.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
