# **Two Sum**

## **Problem Statement**
Given a Roman numeral string s, convert it into an integer. The Roman numeral system uses the following symbols:  
  - I: 1, V: 5, X: 10, L: 50, C: 100, D: 500, M: 1000
Roman numerals follow these rules:
  - If a smaller numeral comes before a larger numeral, subtract the smaller from the larger (e.g., IV = 4, IX = 9).
  - Otherwise, sum the values of the symbols.
**Example Input:**
  ```
  Input: s = "MCMXCIV"
  Output: 1994
  ```
---

## **Solutions Overview**
### **Solution 1: Linear Iteration (Python Language)**
This solution iterates through the Roman numeral string while checking for subtraction cases based on Roman numeral rules. 

- Language: Python
- Code:
  ```
  class Solution:
      def romanToInt(self, s: str) -> int:
          sym = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
          ans = 0
          for i in range(0, len(s) - 1):
              if sym[s[i]] < sym[s[i + 1]]:
                  ans -= sym[s[i]]
              else:
                  ans += sym[s[i]]
          return ans + sym[s[-1]]
    }
  ```
- Time Complexity: O(n)  
  Each character is processed once.
- Space Complexity: O(1)  
  The dictionary size is constant, and no additional data structures are used.

---

## **Conclusion**
straightforward and processes the string from left to right, adhering to the order of Roman numerals.

### **Future Plans**
- Add more solutions using other languages like Java or JavaScript.
- Implement unit tests to verify correctness.
- Optimize memory usage in the C solution.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
