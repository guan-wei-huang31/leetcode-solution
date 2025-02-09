# **Find Numbers with Even Number of Digits**

## **Problem Statement**
This project provides a solution to the Find Numbers with Even Number of Digits problem. Given an array nums, the goal is to count how many numbers in nums contain an even number of digits.  
  

**Example Input:**
  ```
  Input: nums = [12,345,2,6,7896]
  Output: 2
  Explanation: 
  12 contains 2 digits (even number of digits). 
  345 contains 3 digits (odd number of digits). 
  2 contains 1 digit (odd number of digits). 
  6 contains 1 digit (odd number of digits). 
  7896 contains 4 digits (even number of digits). 
  Therefore only 12 and 7896 contain an even number of digits.
  ```
---

## **Solutions Overview**

### **String Approach (C++)**
1. Iterate through nums.
2. Convert each number to a string (to_string(num)).
3. Check if the string length is even (size() % 2 == 0).
4. Increment count if the condition holds.
5. Return count, which stores the total numbers with even digits.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int findNumbers(vector<int>& nums) {
          int count = 0;
          for (auto num : nums){
              if(to_string(num).size() % 2 == 0){
                  count++;
              }
          }
          return count;
      }
  };
  ```
  
- Time Complexity: O(n)  
  - Each number is converted to a string in O(log n) time.
  - Since the number of digits is at most 10 (2³¹ - 1 fits in int), this is effectively O(n).
- Space Complexity: O(1)
  - (no extra storage apart from variables).
  
### **Math Approach (Python)**
1. count digits using logarithms or division.
 
- Language: Python
- Code:
  ```
  class Solution:
      def findNumbers(self, nums: List[int]) -> int:
          count = 0
          for i in range(len(nums)):
              if ((int(log10(nums[i])) + 1) % 2 == 0):
                  count+=1
          return count
  ```
  
- Time Complexity: O(n)  
  - iterate once
- Space Complexity: O(1)
  - (no extra storage apart from variables).
---

## **Conclusion**
- The string approach is the simplest and most readable.
- The logarithmic approach (log10) is the most efficient.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend to counting odd-digit numbers.
- Optimize performance for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
