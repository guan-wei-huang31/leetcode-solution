# **Two Sum II - Input Array Is Sorted**

## **Problem Statement**
This project provides a solution to find two numbers in a sorted array that sum up to a given target. The indices of the two numbers are returned in a 1-based index format.  

**Example Input:**
  ```
  Input: numbers = [2,7,11,15], target = 9
  Output: [1,2]
  Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
  ```
---

## **Solutions Overview**
### **Two Pointers Approach (C++)**
1. Initialize two pointers:
   - ptr_l at the leftmost index (0).
   - ptr_r at the rightmost index (n-1).
2. Iterate until the pointers meet:
3. Compute the sum of numbers[ptr_l] + numbers[ptr_r].
   - If the sum matches the target, return the 1-based indices {ptr_l+1, ptr_r+1}.
   - If the sum is less than the target, move ptr_l to the right.
   - If the sum is greater than the target, move ptr_r to the left.
3. If no solution is found, return an empty vector {}.
   
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> twoSum(vector<int>& numbers, int target) {
          int ptr_l = 0;
          int ptr_r = numbers.size() -1;
          while(ptr_l < ptr_r){
              int sum = numbers[ptr_l] + numbers[ptr_r];
              if (sum == target) return {ptr_l+1, ptr_r+1};
              else if (sum < target) ptr_l++;
              else if (sum > target) ptr_r--;
          }
          return {};
      }
  };
  ```

- Time Complexity: O(n)  
  - The two-pointer approach ensures each element is processed at most once.
- Space Complexity: O(1)
  - No extra data structures are used apart from variables.

---

## **Conclusion**
This two-pointer method is optimal for sorted arrays, leveraging the sorted property to efficiently find the two numbers in O(n) time. It is preferable over brute force (O(n²)) or hash maps (O(n) space).  

### **Future Plans**
- Add implementations in other languages, such as Python, Java.
- Create automated tests to validate edge cases.
- Extend the approach to three-sum and four-sum problems.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
