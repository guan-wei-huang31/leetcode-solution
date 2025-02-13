# **Product of Array Except Self**

## **Problem Statement**
This project provides a solution to compute the product of an array except for the current element at each index. Given an integer array nums, return an array result such that result[i] is the product of all elements in nums except nums[i]. The solution must be implemented without using division.  

**Example Input:**
  ```
  Input: nums = [1,2,3,4]
  Output: [24,12,8,6]
  ```
---

## **Solutions Overview**

### **Prefix and Suffix Product Approach (C++)**
1. Initialize a result array of the same length as nums with all values set to 1.
2. Compute the prefix product for each element:
   - Iterate from left to right, maintaining a cumulative prefix product (acc_pre).
   - Update result[i] by multiplying it with acc_pre.
   - Update acc_pre with the current element value.
3. Compute the suffix product for each element:
   - Iterate from right to left, maintaining a cumulative suffix product (a_post).
   - Update result[i] by multiplying it with a_post.
   - Update a_post with the current element value.
4. Return the result array.  
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> productExceptSelf(vector<int>& nums) {
          const int len = nums.size();
          vector<int>result(len,1);
          for (int i = 0, acc_pre = 1; i < len; i++){
              result[i] *= acc_pre;
              acc_pre *= nums[i];
          }
          for (int i = len - 1, a_post = 1; i >= 0; i--){
              result[i] *= a_post;
              a_post *= nums[i];
          }
          return result;
      }
  };
  ```
  
- Time Complexity: O(n)  
   - Both prefix and suffix passes run in O(n), making the total time complexity O(n).
- Space Complexity: O(1)  
   - The solution modifies the result array in place, without using additional space (excluding output storage).
---

## **Conclusion**
This approach efficiently computes the product of all elements except the current one without using division. It achieves an optimal O(n) time complexity and O(1) space complexity, making it ideal for large input sizes.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Explore alternative approaches using logarithmic properties.
- Optimize memory further using bitwise operations.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
