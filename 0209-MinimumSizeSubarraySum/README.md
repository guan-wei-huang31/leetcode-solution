# **Minimum Size Subarray Sum**

## **Problem Statement**
This project includes a solution to find the minimum length of a contiguous subarray of which the sum is greater than or equal to a given target value. If no such subarray exists, the output should be 0.  

**Example Input:**
  ```
  Input: target = 7, nums = [2, 3, 1, 2, 4, 3]
  Output: 2
  Explanation: The subarray [4, 3] has the minimal length under the problem constraint.
  ```
---

## **Solutions Overview**
### **Sliding Window Approach (C++)**
The sliding window approach is used to solve this problem efficiently by maintaining a dynamic subarray whose sum satisfies the condition. The solution works as follows:
  1. Use two pointers to define the current window (i and j).
  2. Traverse the array with the end pointer (j) to extend the window.
  3. Shrink the window from the start pointer (i) as long as the sum of the window is greater than or equal to the target value.
  4. Track the minimum length of such a window.
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = INT32_MAX;
        int sum = 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (sum >= target) {
                length = min(length, j - i + 1);
                sum -= nums[i++];
            }
        }
        return length == INT32_MAX ? 0 : length;
    }
  };
  ```

- Time Complexity: O(n)
  Each element is visited at most twice (once when extending the window and once when shrinking it).  

- Space Complexity: O(1)
  No additional data structures are used.
  
---

## **Conclusion**
The sliding window approach is a highly efficient solution for the "Minimum Size Subarray Sum" problem. It achieves linear time complexity and requires constant space, making it ideal for large input sizes.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
