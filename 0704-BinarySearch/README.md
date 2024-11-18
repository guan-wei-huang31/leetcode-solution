# **Binary Search**

## **Problem Statement**
This project provides implementations of the Binary Search algorithm in Python and C. Binary Search is used to find the index of a target element in a sorted array, achieving logarithmic time complexity.

**Example Input:**
  ```
  Input: nums = [1, 2, 3, 4, 5, 6, 7, 8, 9], target = 5  
  Output: 4
  ```
---

## **Solutions Overview**
### **Binary Search Approach (C/Python)**
1. Initialization:
   - Set pointers left to 0 (start) and right to the last index of the list.
2. Iterative Search:
   - Compute the mid-point of the current search range.
   - If the mid-point value equals the target, return the index.
   - Adjust pointers (left or right) based on comparison with the target.
3. Termination:
   - If left > right, return -1, indicating the target is not found.

- Language: C
- Code:
  ```
  #include <stdio.h>
  
  int binarySearch(int arr[], int target, int size) {
      int left = 0, right = size - 1;
  
      while (left <= right) {
          int mid = left + (right - left) / 2;
  
          if (arr[mid] == target) {
              return mid;
          } else if (arr[mid] < target) {
              left = mid + 1;
          } else {
              right = mid - 1;
          }
      }
  
      return -1; // Target not found
  }
  ```
  
- Language: Python
- Code:
  ```
  from typing import List
  
  class Solution:
      def binarySearch(self, nums: List[int], target: int) -> int:
          left, right = 0, len(nums) - 1
  
          while left <= right:
              mid = left + (right - left) // 2
  
              if nums[mid] == target:
                  return mid
              elif nums[mid] < target:
                  left = mid + 1
              else:
                  right = mid - 1
  
          return -1
  
  ```
  
- Time Complexity: O(log N)
  The range of indices is halved on each iteration.
- Space Complexity: O(1)
  Uses a fixed number of variables.
  
---

## **Conclusion**
Both the Python and C implementations are efficient and achieve logarithmic time complexity. The Python implementation focuses on simplicity and readability, while the C version emphasizes low-level control and performance.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
