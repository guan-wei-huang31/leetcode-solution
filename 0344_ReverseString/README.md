# **Reverse String**

## **Problem Statement**
This project demonstrates a simple algorithm to reverse a string in place using C++. The algorithm rearranges the characters in a vector so that the order is reversed. This solution employs the two-pointer approach for efficient in-place reversal.
**Example Input:**
  ```
  Input: s = ['h', 'e', 'l', 'l', 'o']  
  Output: ['o', 'l', 'l', 'e', 'h']
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C/C++)**
1. Pointer Initialization:
   - A pointer ptr_l starts at the left end (index 0).
   - Another pointer ptr_r starts at the right end (index s.size() - 1).
2. Swapping in Place: 
   - Swap the characters at ptr_l and ptr_r positions.
   - Move ptr_l to the right and ptr_r to the left.
3. Termination:
   - The process stops when the two pointers meet or cross each other.

- Language: C++
- Code:
  ```
  class Solution {
  public:
      void reverseString(vector<char>& s) {
          int ptr_l=0;
          int ptr_r=s.size()-1;
          while(ptr_l<ptr_r){
              char tmp = s[ptr_l];
              s[ptr_l] = s[ptr_r];
              s[ptr_r] = tmp;
              ptr_l++;
              ptr_r--;
          }
      }
  };
  ```

- Time Complexity: O(n)
  O(n) where n is the size of the vector. Each element is visited at most once.
- Space Complexity: O(1)
  O(1) since no extra space is used other than temporary variables for swapping.
  
---

## **Conclusion**
This two-pointer approach provides an efficient way to reverse a string in place with O(n) time complexity and O(1) space complexity. The algorithm is practical for scenarios where memory usage needs to be minimized, and it maintains simplicity.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Experiment with alternative algorithms to see if a single-pass solution could offer further performance improvements.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
