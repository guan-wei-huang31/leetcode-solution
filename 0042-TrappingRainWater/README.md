# **Trapping Rain Water**

## **Problem Statement**
This project provides a solution to the Trapping Rain Water problem. Given an array height, where each element represents the elevation at that index, the goal is to calculate the total amount of rainwater that can be trapped between the elevations.
- Water is trapped where a lower height is surrounded by higher heights on both sides.  

**Example Input:**
  ```
  Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
  Output: 6
  Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C++)**
1. Initialize two pointers:
   - ptr_l at the leftmost index (0).
   - ptr_r at the rightmost index (n-1).
   - Two variables max_l and max_r track the maximum height encountered from the left and right.
   - A variable total stores the accumulated trapped water.
2. Iterate until the pointers meet:
   - If height[ptr_l] is smaller than height[ptr_r]:
     - If height[ptr_l] is greater than or equal to max_l, update max_l.
     - Otherwise, water is trapped, and total += max_l - height[ptr_l].
     - Move ptr_l right.
   - Otherwise:
     - If height[ptr_r] is greater than or equal to max_r, update max_r.
     - Otherwise, water is trapped, and total += max_r - height[ptr_r].
     - Move ptr_r left.
3. Return the total trapped water.
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int trap(vector<int>& height) {
          int ptr_l = 0;
          int ptr_r = height.size() - 1;
          int max_l = 0, max_r = 0, total = 0;
          while(ptr_l < ptr_r){
              if(height[ptr_l] < height[ptr_r]){
                  if(height[ptr_l] >= max_l){
                      max_l = height[ptr_l];
                  }else{
                      total += max_l - height[ptr_l];
                  }
                  ptr_l++;
              }else{
                  if(height[ptr_r] >= max_r){
                      max_r = height[ptr_r];
                  }else{
                      total += max_r - height[ptr_r];
                  }
                  ptr_r--;
              }
          }
          return total;
      }
  };
  ```
  
- Time Complexity:  O(n)    
  The two-pointer approach ensures each element is processed at most once.  
  
- Space Complexity: O(1)    
  No extra data structures are used apart from variables.   
  
---

## **Conclusion**
This two-pointer method efficiently computes the total trapped rainwater while maintaining an optimal O(n) time complexity. It eliminates unnecessary calculations by tracking the maximum heights dynamically.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Explore dynamic programming and stack-based approaches.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
