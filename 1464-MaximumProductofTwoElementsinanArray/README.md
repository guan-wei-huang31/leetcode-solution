# **Maximum Product of Two Elements in an Array**

## **Problem Statement**
This project provides a solution to the Maximum Product of Two Elements in an Array problem. Given an array nums, the goal is to find the two largest numbers, a and b, and compute:

**Example Input:**
  ```
  Input: nums = [3,4,5,2]
  Output: 12 
  Explanation: The two largest numbers are 5 and 4.  
               (5 - 1) * (4 - 1) = 12.
  ```
---

## **Solutions Overview**

### **Array Linear Search Approach (C++)**
1. Initialize two variables (a, b) to track the two largest numbers.
2. Iterate through nums:
   - If num is greater than or equal to a, update b = a and a = num (update both).
   - Otherwise, update b if num is greater than b.
3. Compute (a-1) * (b-1) and return the result.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int maxProduct(vector<int>& nums) {
          int a = 0;
          int b = 0;
          for (auto num : nums){
              if (num >= a) {
                  b = a;
                  a = num;
              }
              else{
                  b = max(b,num);
              } 
          }
          return (a-1)*(b-1);
      }
  };
  ```
  
- Time Complexity:  O(n)  
  - The array is traversed once, making this an O(n) time complexity solution.
The number of steps is approximately O(log n).
- Space Complexity: O(1)
  - Uses only two integer variables (a, b), so constant space is required.
  
---

## **Conclusion**
- The single-pass max finding approach (O(n)) is optimal for finding the two largest elements and computing their product efficiently.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend to finding k largest numbers efficiently.
- Optimize for large-scale inputs.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
