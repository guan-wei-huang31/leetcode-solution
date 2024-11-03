# **Sort Array By Parity II**

## **Problem Statement**
This project contains implementations of an algorithm that sorts an array so that even-indexed positions contain even numbers and odd-indexed positions contain odd numbers. The solution uses efficient techniques to achieve this alternating pattern for the array.
**Example Input:**
  ```
  Input: nums = [4, 2, 5, 7]  
  Output: [4, 5, 2, 7] 
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C++)**
1. Pointer Initialization:
   - ptr_even starts at index 0, targeting even-indexed positions.
   - ptr_odd starts at index 1, targeting odd-indexed positions.
2. In-Place Checking and Swapping::
   - If ptr_even points to an odd number or ptr_odd points to an even number, the values at these positions are swapped.
   - Both pointers are incremented by 2 to continue checking subsequent positions.
3. Termination:
   - The process stops once both pointers reach the end of the array.

- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> sortArrayByParityII(vector<int>& nums) {
          int ptr_even = 0;
          int ptr_odd = 1;
          int size_of_nums = nums.size();
          while (ptr_even < size_of_nums && ptr_odd < size_of_nums) {
              if (nums[ptr_even] % 2 == 0) {
                  ptr_even += 2;
              } else if (nums[ptr_odd] % 2 == 1) {
                  ptr_odd += 2;
              } else {
                  swap(nums[ptr_even], nums[ptr_odd]);
                  ptr_even += 2;
                  ptr_odd += 2;
              }
          }
          return nums;
      }
  };
  ```

- Time Complexity: O(n)
  Each element is visited at most once, making it linear with respect to the size of the input array.
- Space Complexity: O(1)
  The sorting occurs in place, so no additional space is required aside from temporary variables.
  
### **List Comprehension and Zip Approach (Python)**
1. Separate Even and Odd Elements:
   - Two lists, evens and odds, are created to store even and odd elements from nums respectively.
2. Interleave Even and Odd Elements:
   - Using zip, each even element is paired with an odd element, and they are appended to the sorted_nums list in the required alternating pattern.

- Language: Python
- Code:   
  ```
  class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        evens = [num for num in nums if num % 2 == 0]
        odds = [num for num in nums if num % 2 == 1]
        
        sorted_nums = []
        for even, odd in zip(evens, odds):
            sorted_nums.extend([even, odd])
        
        return sorted_nums
  ``` 

- Time Complexity: O(n)
  The time complexity remains linear as each element is processed once.
- Space Complexity: O(1)
  This approach requires additional lists for even and odd elements, leading to linear space complexity.
   
---

## **Conclusion**
Both the C++ and Python implementations provide efficient solutions to the problem. The C++ two-pointer method optimizes for in-place sorting with constant space complexity, while the Python solution is straightforward and leverages list comprehension for readability.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
