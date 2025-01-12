# **Remove Element**

## **Problem Statement**
Given an array of integers nums and an integer val, remove all occurrences of val in-place. The relative order of the elements may be changed, but you must do it with minimal memory usage. The function should return the new length of the modified array after removal.

**Example Input:**
  ```
  Input: nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2  
  Output: Array after removal: [0, 1, 3, 0, 4], New length: 5
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C++)**
This solution uses two pointers: one (ptr_l) starting from the left and another (ptr_r) starting from the right. The goal is to swap elements when the left pointer encounters the target value (val), placing it at the end of the array. The right pointer decrements each time a target value is found, and the new length of the array is returned based on the left pointer's position.
- Language: C++
- Code:
  ```
  #include <iostream>
  #include <vector>
  using namespace std;
  
  class Solution {
  public:
      int removeElement(vector<int>& nums, int val) {
          int ptr_l = 0;
          int ptr_r = nums.size() - 1;
          while (ptr_l <= ptr_r) {
              while (ptr_l <= ptr_r && nums[ptr_r] == val) {
                  ptr_r--;
              }
              while (ptr_l <= ptr_r && nums[ptr_l] != val) {
                  ptr_l++;
              }
              if (ptr_l < ptr_r) {
                  nums[ptr_l] = nums[ptr_r];
                  ptr_r--;
                  ptr_l++;
              }
          }
          return ptr_l;
      }
  };
  ```
- Time Complexity: O(n)
  Each element is visited at most once by either ptr_l or ptr_r.
- Space Complexity: O(1)
  The algorithm performs the operation in-place without using additional space proportional to the input size.

---

## **Conclusion**
This two-pointer approach efficiently removes the specified elements from the array with a linear time complexity. It avoids using extra space, making it a space-efficient solution.

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement automated tests to ensure correctness across edge cases.
- Explore alternative algorithms to further optimize the performance for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
