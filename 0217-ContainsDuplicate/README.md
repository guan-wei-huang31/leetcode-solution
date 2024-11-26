# **Contains Duplicate**

## **Problem Statement**
This project provides a solution to determine if a list of integers contains any duplicate elements. A duplicate is defined as an element that appears more than once in the list.

**Example Input:**
  ```
  Input: nums = [1, 2, 3, 1]
  Output: True
  ```
---

## **Solutions Overview**
### **Sorting and Linear Scan Approach (C++)**
1. Sort the List:   
   Use the sort function to arrange the list in ascending order.  
2. Check Consecutive Elements:  
   Traverse the sorted list and compare each element with its previous element. If any two consecutive elements are equal, return True (indicating a duplicate is found).
3. Return Result:  
   If the loop completes without finding duplicates, return False.
   
- Language: C++
- Code:
  ```
  class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
          sort(nums.begin(), nums.end());
          
          for (int i = 1; i < nums.size(); i++) {
              if (nums[i] == nums[i - 1]) {
                  return true;
              }
          }
          
          return false;        
      }
  };
  ```

- Time Complexity: O(n log n)  
  Sorting the list takes O(n log n) time.  
  The linear scan after sorting takes O(n) time.  
- Space Complexity: O(1)  
  Sorting is done in-place, and no additional data structures are used.  
  
---

## **Conclusion**
This solution effectively identifies duplicates in a list using a sorting-based approach. While not the most optimal in terms of time complexity for larger datasets, it provides a straightforward and reliable solution for small to medium-sized inputs.  

### **Future Plans**
- Add implementations in other languages, such as Python, Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
