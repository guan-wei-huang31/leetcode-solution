# **Running Sum Of 1D Array**

## **Problem Statement**
This project provides a solution to calculate the running sum of a given array. The running sum of an array is defined as a new array where the i-th element is the sum of the first i elements of the original array.

**Example Input:**
  ```
  Input: nums = [1, 2, 3, 4]
  Output: [1, 3, 6, 10]
  ```
---

## **Solutions Overview**
### **Iterative Approach (Python)**
The iterative approach is used to compute the running sum of an array efficiently. The solution works as follows:
1. Traverse the array using a for loop.
2. Maintain a cumulative sum variable (sum) that keeps track of the total as elements are iterated.
3. Update each element of the array with the cumulative sum.

- Language: Python
- Code:
  ```
  class Solution:
      def runningSum(self, nums: List[int]) -> List[int]:
          sum = 0
          for i in range(len(nums)):
              sum += nums[i]
              nums[i] = sum
          return nums
  ```

- Time Complexity: O(n)  
  The algorithm traverses the array once, performing O(1) operations per element.
- Space Complexity: O(n)  
  The solution modifies the input array in place, requiring no additional space.
  
---

## **Conclusion**
The iterative approach is straightforward and efficient for computing the running sum. By modifying the input array directly, the solution achieves constant space complexity, making it an optimal choice for this problem.

### **Future Plans**
- Add implementations in other programming languages, such as Java and C++.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
