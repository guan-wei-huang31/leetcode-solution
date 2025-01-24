# **Three Sum**

## **Problem Statement**
The goal of this project is to find all unique triplets in an array of integers that sum up to zero. The function takes an input vector of integers nums and returns a list of triplets that satisfy the condition where their sum equals zero. The solution must avoid duplicate triplets. 

**Example Input:**
  ```
  Input: nums = [-1, 0, 1, 2, -1, -4]
  Output: [[-1, -1, 2], [-1, 0, 1]]
  
  Input: nums = []
  Output: []
  
  Input: nums = [0]
  Output: []
  ```
---

## **Solutions Overview**
### **Sorting and Two-Pointer Approach (C++)**
The solution leverages sorting and a two-pointer technique to efficiently find unique triplets.  
  1. Sort the input array.
  2. Iterate through the sorted array with an index i.
  3. Use two pointers (left and right) to find pairs that sum to the negative value of nums[i].
  4. Skip duplicate elements to avoid duplicate triplets. 
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>> result;
          sort(nums.begin(), nums.end());
  
          for (int i = 0; i < nums.size() - 2; i++) {
              if (i > 0 && nums[i] == nums[i - 1])
                  continue;
  
              int left = i + 1, right = nums.size() - 1;
              while (left < right) {
                  int sum = nums[i] + nums[left] + nums[right];
                  if (sum == 0) {
                      result.push_back({nums[i], nums[left], nums[right]});
                      while (left < right && nums[left] == nums[left + 1]) left++;
                      while (left < right && nums[right] == nums[right - 1]) right--;
                      left++;
                      right--;
                  } else if (sum < 0) {
                      left++;
                  } else {
                      right--;
                  }
              }
          }
          return result;
      }
  };
  ```
  
- Time Complexity:  O(n^2)    
  The solution sorts the array (O(n log n)) and uses a nested loop with two pointers(O(n^2)), making it quadratic in time complexity.  
  
- Space Complexity: O(1)    
  Use only constant extra space.. 
  
---

## **Conclusion**
The optimized sorting and two-pointer approach provides an efficient way to solve the "Three Sum" problem by reducing redundant checks and ensuring unique triplets. It balances time complexity with minimal space usage.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
