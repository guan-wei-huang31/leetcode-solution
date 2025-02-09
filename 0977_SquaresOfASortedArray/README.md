# **Squares of a Sorted Array**

## **Problem Statement**
This project provides a solution to the Squares of a Sorted Array problem. Given a sorted integer array nums (which may contain negative numbers), the goal is to return an array of the squares of each number, sorted in non-decreasing order.  
  

**Example Input:**
  ```
  Input: nums = [-4,-1,0,3,10]
  Output: [0,1,9,16,100]
  Explanation: After squaring, the array becomes [16,1,0,9,100].
  After sorting, it becomes [0,1,9,16,100].
  ```
---

## **Solutions Overview**
### **Sorting Approach (C++)**
1. Square each element in nums.
2. Sort the squared elements using sort().
3. Return the sorted array.
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> sortedSquares(vector<int>& nums) {
          for (int i = 0; i < nums.size(); i++){
              nums[i] *= nums[i];
          }
          sort(begin(nums), end(nums));
          return nums;
      }
  };
  ```
  
- Time Complexity:  O(n log n)
  - Squaring each element is O(n).
  - Sorting takes O(n log n). 
  
- Space Complexity: O(1) (in-place modification).  
  
---

## **Conclusion**
The sorting approach (O(n log n)) is simple but suboptimal. The two-pointer approach (O(n)) is the best method, leveraging the sorted nature of nums to build the result without sorting.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Optimize memory usage further.
- Two Pointers approach.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
