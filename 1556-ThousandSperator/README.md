# **Thousand Separator**

## **Problem Statement**
This project includes a solution to format a given integer by adding dots (.) as thousand separators. The output string should:
1. Represent the input integer as a string.
2. Insert dots (.) after every three digits, counting from the rightmost digit.

**Example Input:**
  ```
  Input: n = 123456789
  Output: "123.456.789"
  ```
---

## **Solutions Overview**
### **Single-Pass Approach (Python)**
1. Convert the Input:
   - Convert the input integer n into a string to process its digits.
2. Iterate and Format:
   - Traverse the string from left to right.
   - Insert a dot (.) after every group of three digits.
3. Return the Formatted String:
   - Combine all characters into the resulting string.  
   
- Language: Python
- Code:
  ```
  class Solution:
    def thousandSeparator(self, n: int) -> str:
        ans = ''
        str_n = str(n)
        for i in range(len(str_n)):
            if i > 0 and (len(str_n) - i) % 3 == 0:
                ans += '.'
            ans += str_n[i]
        return ans
  ```
  
- Time Complexity: O(n)
  O(n) where d is the number of digits in n. The algorithm processes each digit once.
- Space Complexity: O(1)
  O(n) due to the storage of the result as a list.

---

## **Conclusion**
This single-pass approach efficiently formats the number by processing each digit in a single traversal. The optimized version further enhances performance by reducing the overhead of string concatenation.

### **Future Plans**
- Add implementations in other languages, such as C++ and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
