# **Valid Mountain Array**

## **Problem Statement**
This project includes a solution to check if a given array is a "mountain array." An array is considered a mountain if it:
1. Has at least three elements.
2. Has a strictly increasing sequence that peaks at some index.
3. After the peak, has a strictly decreasing sequence until the end of the array.

**Example Input:**
  ```
  Input: arr = [0, 3, 2, 1]
  Output: True

  ```
---

## **Solutions Overview**
### **Single-Pass Approach (C++/Python)**
1. Initial Length Check:
   - If the array has fewer than 3 elements, it's immediately invalid.
2. Climb Up:
   - Starting from the first index, traverse upward until the values stop increasing.
3. Check Peak Validity:
   - Ensure that the peak is not at the first or last index, as that would not satisfy the mountain criteria.
4. Climb Down:
   - Continue traversing the array downward from the peak to verify the decreasing condition.
5. Final Verification:
   - Return true if the traversal reaches the end, confirming a valid mountain structure.   
   
- Language: C++
- Code:
  ```
  class Solution {
  public:
      bool validMountainArray(vector<int>& arr) {
          int len = arr.size();
          if (len < 3){
              return false;
          }
          int i = 0;
          while (i + 1 < len && arr[i] < arr[i + 1]) {
              i++;
          }
  
          if (i == 0 || i == len-1){
              return false;
          }
          while (i + 1 < len && arr[i] > arr[i + 1]) {
              i++;
          }
          return i == len - 1;
      }
  };
  ```
  
- Language: python
- Code:
  ```
  class Solution:
      def validMountainArray(self, arr: List[int]) -> bool:
          n = len(arr)
          if n < 3:
              return False
  
          i = 0
  
          # Single pass: Climb up and immediately down
          while i + 1 < n and arr[i] < arr[i + 1]:
              i += 1
  
          # Check if peak is the first or last element
          if i == 0 or i == n - 1:
              return False
  
          # Continue descending
          while i + 1 < n and arr[i] > arr[i + 1]:
              i += 1
  
          # If we reached the end, it's a valid mountain array
          return i == n - 1
  ```


- Time Complexity: O(n)
  The algorithm traverses the array once, making it linear in time complexity.
- Space Complexity: O(1)
  The function only requires a constant amount of extra space.

---

## **Conclusion**
This single-pass approach is efficient and concise, checking both the upward and downward conditions in one traversal. The solution minimizes the number of checks while maintaining readability.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
