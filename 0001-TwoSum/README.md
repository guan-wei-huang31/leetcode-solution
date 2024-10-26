# **Two Sum**

## **Problem Statement**
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example Input:**
  ```
  Input: nums = [2, 7, 11, 15], target = 9
  Output: [0, 1]
  ```
---

## **Solutions Overview**
### **Solution 1: Brute Force Approach (C Language)**
This solution uses a nested loop to check every possible pair of numbers.
It has a time complexity of O(n^2).
- Language: C
- Code:
  ```
  int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
      for (int i = 0; i < numsSize; i++) {
          for (int j = i + 1; j < numsSize; j++) {
              if (nums[i] + nums[j] == target) {
                  int* result = (int*)malloc(2 * sizeof(int));
                  result[0] = i;
                  result[1] = j;
                  *returnSize = 2;
                  return result;
                }
            }
        }
    return NULL;
  }
  ```
- Time Complexity: O(n^2)
  Each pair is checked once, leading to quadratic time complexity.
- Space Complexity: O(1)
  We only allocate a small fixed-size array to store the result
---

### **Hash Map Approach (Python)**
This solution uses a hash map (dictionary) to store the indices of previously seen elements and find the complement efficiently.
It has a time complexity of O(n).
- Language: Python
- Code:
```
def TwoSum(nums, target):
    pair_idx = {}
    for i, num in enumerate(nums):
        if target - num in pair_idx:
            return [i, pair_idx[target - num]]
        pair_idx[num] = i
```
- Time Complexity: O(n)
We traverse the list only once, and lookups in the hash map take constant time.
- Space Complexity: O(n)
The hash map stores at most n elements.
---

## **Conclusion**
Both solutions solve the Two Sum problem, but the hash map approach (Python) is more efficient for larger datasets. The brute force approach (C) demonstrates a straightforward way to solve the problem, which may be useful for understanding the basic logic.

### **Future Plans**
- Add more solutions using other languages like Java or JavaScript.
- Implement unit tests to verify correctness.
- Optimize memory usage in the C solution.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
