# **Move Zeroes**

## **Problem Statement**
This project demonstrates a simple algorithm to move all zero elements in an array to the end, while maintaining the relative order of the non-zero elements. Implementations are provided in C++ and Python, showcasing vector/list operations and in-place rearrangement.
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
- Language: Python
- Code:
  ```
  class Solution:
     def moveZeroes(self, nums: List[int]) -> None:
         insert_pos = 0
         
         for i in range(len(nums)):
             if nums[i] != 0:
                 nums[insert_pos] = nums[i]
                 insert_pos += 1
         
         while insert_pos < len(nums):
             nums[insert_pos] = 0
             insert_pos += 1
  ```

- Time Complexity: O(n)
  Both Python and C++ solutions traverse the input list/array twice.
  1. First Pass: Moving non-zero elements to the front.
  2. Second Pass: Filling the remaining positions with zeros.
- Space Complexity: O(1)
  Both implementations modify the input in-place, meaning no additional space proportional to the input size is used.
  
---

## **Conclusion**
This two-pass approach efficiently moves all zeroes to the end while maintaining the order of non-zero elements. It achieves O(n) time complexity and O(1) space complexity, making it an optimal solution for practical applications.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Experiment with alternative algorithms to see if a single-pass solution could offer further performance improvements.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
