# **Merge Sorted Array**

## **Problem Statement**
This C++ solution uses two pointers to merge nums1 and nums2 in-place, without using extra space. The algorithm starts from the end of both arrays and places the largest elements in the last position of nums1, reducing the need for shifting elements.

**Example Input:**
  ```
  Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
  Output: [1,2,2,3,5,6]

  ```
---

## **Solutions Overview**
### **In-Place Two-Pointer Approach (C++)**
1. Initialize Pointers:
    - ptr_1 is set to the last initialized element in nums1 (m - 1).
    - ptr_2 is set to the last element in nums2 (n - 1).
    - ptr_f is set to the last position in nums1 (m + n - 1), where merged elements will be placed.
2. Compare and Place Elements:
    - The algorithm compares nums1[ptr_1] and nums2[ptr_2].
    - The larger element is placed at nums1[ptr_f], and the corresponding pointer is decremented.
    - If nums1[ptr_1] is larger, it’s placed first; otherwise, nums2[ptr_2] is placed.
3. Completion:
    - This process continues until all elements from nums2 are merged into nums1.

- Language: C++
- Code:
  ```
  class Solution {
  public:
      void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          int ptr_1 = m - 1;
          int ptr_2 = n - 1;
          int ptr_f = m + n - 1;
          
          while (ptr_2 >= 0) {
              if (ptr_1 >= 0 && nums1[ptr_1] > nums2[ptr_2]) {
                  nums1[ptr_f--] = nums1[ptr_1--];
              } else {
                  nums1[ptr_f--] = nums2[ptr_2--];
              }
          }
      }
  };
  ```
- Time Complexity: O(m+n)   
  This algorithm processes each element in nums1 and nums2 once.
- Space Complexity: O(1)  
  No extra space is required other than the integer pointers.  

### **Append and Sort Approach (Python)**
1. Append Elements:
    - The elements of nums2 are copied to the end of nums1 (starting from index m).
2. Sort:
    - The entire nums1 array is then sorted in-place to obtain the merged result.

- Language: python
- Code:
  ```
  class Solution(object):
     def merge(self, nums1, m, nums2, n):
       for j in range(n):
           nums1[m+j] = nums2[j]
       nums1.sort()
  ```

- Time Complexity: O((m+n)log(m+n))  
  The sorting step dominates the complexity, making it less efficient than the in-place solution.  
- Space Complexity: O(log(m+n))  
  This complexity is due to the in-place sort() function, which may require additional memory for recursive calls or auxiliary data structures, depending on the sorting algorithm.  

---

## **Conclusion**
1. **In-Place Two-Pointer Approach (C++):**
   - Advantages: Optimized for time and space, with 𝑂(𝑚+𝑛) time complexity and 𝑂(1) space complexity.
   - Use Case: Suitable when efficiency is critical, especially for large arrays.
2. **Append and Sort Approach (Python):**  
   - Advantages: Simple and concise code, but it’s less efficient due to the sorting step.  
   - Use Case: Suitable for smaller arrays or when code simplicity is prioritized over performance.  
   
### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
