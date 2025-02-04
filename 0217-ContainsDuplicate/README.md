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
  
### **Hash Map Approach (Python)**
1. Use a Dictionary (dict in Python):
   - Create an empty dictionary to store seen numbers.
2. Traverse the List:
   - For each number, check if it exists in the dictionary:
   - If it exists, return True (duplicate found).
   - Otherwise, add the number to the dictionary.
3. Return False if no duplicates are found.
   
- Language: Python
- Code:
  ```
  class Solution:
      def containsDuplicate(self, nums: List[int]) -> bool:
          hashmap = {}
          for num in nums:
              if num in hashmap:
                  return True
              hashmap[num] = 1
          return False
  ```  
  

- Time Complexity: O(n)    
  The dictionary lookup and insert operations are O(1) on average, making the overall complexity O(n). 
- Space Complexity: O(n)    
  In the worst case, all n elements are stored in the dictionary.
  
---

## **Conclusion**
Both approaches effectively identify duplicates in a list. The sorting approach provides a simple solution but has a higher time complexity (O(n log n)), while the dictionary approach provides an optimal O(n) solution using additional space.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
