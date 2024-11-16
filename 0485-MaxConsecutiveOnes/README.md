# **Find Max Consecutive Ones**

## **Problem Statement**
This project demonstrates an efficient algorithm to find the maximum number of consecutive 1s in a binary array using Python. The solution iterates through the array while maintaining a count of consecutive 1s and updates the maximum count whenever necessary.ch for efficient in-place reversal.
**Example Input:**
  ```
  Input: nums = [1, 1, 0, 1, 1, 1]  
  Output: 3
  ```
---

## **Solutions Overview**
### **Iterative Approach (Python)**
1. Initialize Counters:
   - counts: Tracks the current number of consecutive 1s.
   - powers: Keeps track of the maximum number of consecutive 1s encountered.
2. Iteration: 
   - Loop through the binary array.
   - Increment counts if the current element is 1
   - Reset counts to 0 if the current element is 0.
3. Update Maximum Count:
   - At each iteration, update powers to the maximum of its current value and counts.
4. Termination:
   - Return powers after completing the loop.

- Language: Python
- Code:
  ```
  class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        counts = 0
        powers = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                counts += 1
            else:
                counts = 0
            powers = max(powers, counts)
        return powers
  ```

- Time Complexity: O(n)
  O(n), where n is the size of the array. Each element is processed exactly once.
- Space Complexity: O(1)
  O(1) since no additional space is used apart from the counters.
  
---

## **Conclusion**
This algorithm provides an efficient way to calculate the maximum number of consecutive 1s in a binary array, achieving O(n) time complexity and O(1) space complexity. Its simplicity makes it ideal for real-time scenarios where memory usage must be minimized.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Experiment with alternative algorithms to see if a single-pass solution could offer further performance improvements.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
