# **Move Zeroes**

## **Problem Statement**
This project demonstrates a simple algorithm to move all zero elements in an array to the end, while maintaining the relative order of the non-zero elements. The code is implemented in C++, highlighting vector operations and in-place rearrangement.

**Example Input:**
  ```
  Input: nums = [0, 1, 0, 3, 12]
  Output: [1, 3, 12, 0, 0]
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C/C++)**
1. First Pass: It copies all non-zero elements to the front of the array.
2. Second Pass: It fills the remaining positions with zeros.

- Language: C++
- Code:
  ```
  #include <iostream>
  #include <vector>
  using namespace std;
  
  class Solution {
  public:
      void moveZeroes(vector<int>& nums) {
          int insertPos = 0;  // Keeps track of the position to insert non-zero elements
          
          // First pass: Move all non-zero elements to the front
          for (int i = 0; i < nums.size(); i++) {
              if (nums[i] != 0) {
                  nums[insertPos++] = nums[i];
              }
          }
  
          // Second pass: Fill remaining positions with zeros
          while (insertPos < nums.size()) {
              nums[insertPos++] = 0;
          }
      }
  };
  ```

- Time Complexity: O(n)
  The algorithm traverses the input array twice: once to move non-zero elements and once to fill with zeros.
- Space Complexity: O(1)
  The input vector is modified in-place, and no extra space proportional to the input size is used.
  
---

## **Conclusion**
This two-pass approach provides a simple and efficient way to move all zeroes to the end of the array while maintaining the order of non-zero elements. It is optimized for both time and space, making it a robust solution for real-world scenarios.

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Experiment with alternative algorithms to see if a single-pass solution could offer further performance improvements.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
