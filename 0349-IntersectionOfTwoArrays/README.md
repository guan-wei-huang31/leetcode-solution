# **Intersection of Two Arrays**

## **Problem Statement**
This project provides a solution to find the intersection of two arrays. Each element in the result must be unique, and the order does not matter.
  
**Example Input:**
  ```
  Input: nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
  Output: [4, 9]
  ```
---

## **Solutions Overview**
### **Unordered Set Approach (C++)**
1. Use an `unordered_set` to store the elements of the first array (`nums1`).
2. Iterate through the second array (`nums2`):
   - If an element exists in the set, add it to a result set.
   - Remove the element from the initial set to avoid duplicates.
3. Convert the result set to a vector and return it.
     
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          unordered_set<int> set1(nums1.begin(), nums1.end());
          unordered_set<int> resultSet;
          
          for (int num : nums2) {
              if (set1.count(num)) {
                  resultSet.insert(num);
              }
          }

          return vector<int>(resultSet.begin(), resultSet.end());
      }
  };
  ```
  
- Time Complexity: O(n + m)
  - `n` is the size of `nums1`.
  - `m` is the size of `nums2`.
- Space Complexity: O(n)
  - Space is used to store elements of `nums1` in the set.
---

## **Conclusion**
This approach effectively finds the intersection of two arrays, ensuring unique elements in the result. The use of hash sets provides an efficient solution with linear complexity relative to the input size.
  
### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
