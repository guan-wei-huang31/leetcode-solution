# **Majority Element**

## **Problem Statement**
This project provides a solution to find the majority element in a list of integers. A majority element is defined as an element that appears more than n/2 times in a list, where n is the size of the list.

**Example Input:**
  ```
  Input: nums = [3, 2, 3]
  Output: 3
  ```
---

## **Solutions Overview**
### **Single-Pass Approach (Python)**
1. Initialize a dictionary to store the frequency of each element.
2. Traverse through each element in the list and update the count in the dictionary.
3. Check if the current element’s count exceeds n/2, where n is the length of the list:
   - If true, return this element as the majority element.
4. If no element meets this condition, return None.
   
- Language: Python
- Code:
  ```
  from typing import List
  
  class Solution:
      def majorityElement(self, nums: List[int]) -> int:
          # Dictionary to store the frequency of each element
          dict_num = {}
          # Iterate through each number in the list
          for num in nums:
              # Increment the count for the number in the dictionary
              dict_num[num] = dict_num.get(num, 0) + 1
              # Check if the current number count is greater than half the list size
              if dict_num[num] > len(nums) / 2:
                  return num
  
  ```

- Time Complexity: O(n)
  The algorithm traverses the list once, making it linear in time complexity.
- Space Complexity: O(n)
  The dictionary requires space to store counts for each unique element.

---

## **Conclusion**
This single-pass approach efficiently finds the majority element by counting occurrences as it traverses the list. The solution is both simple and effective for the given problem constraints.

### **Future Plans**
- Add implementations in other languages, such as C++, Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
