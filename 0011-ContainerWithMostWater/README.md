# **Container With Most Water**

## **Problem Statement**
This project provides a solution to the Container With Most Water problem. Given an array heights where each element represents the height of a vertical line, the goal is to find two lines that together with the x-axis form a container that holds the maximum water.  
The amount of water a container can hold is determined by the smaller height of the two lines multiplied by the distance between them.  

**Example Input:**
  ```
  Input: height = [1,8,6,2,5,4,8,3,7]
  Output: 49
  Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C++)**
1. Initialize two pointers:
  - ptr_l at the leftmost index (0).
  - ptr_r at the rightmost index (n-1).
2. Iterate until the pointers meet:
  - Compute the container height as the minimum of the two heights.
  - Compute the container width as (ptr_r - ptr_l).
  - Update maxResult with the maximum water volume found so far.
3. Move the smaller height:
  - If heights[ptr_l] <= heights[ptr_r], increment ptr_l.
  - Otherwise, decrement ptr_r.
4. Return the maxResult.
  
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int maxArea(vector<int>& heights) {
          int maxResult = 0;
          int ptr_l = 0;
          int ptr_r = heights.size() - 1;
          while(ptr_l < ptr_r) {
              int h = min(heights[ptr_l], heights[ptr_r]);
              maxResult = max(maxResult, (ptr_r-ptr_l)*h);
              if(heights[ptr_l] <= heights[ptr_r]){
                  ptr_l++;
              }else{
                  ptr_r--;
              }
          }
          return maxResult;
      }
  };
  ```
  
- Time Complexity:  O(n)  
  - The two-pointer approach ensures each element is processed at most once.  

- Space Complexity: O(1)    
  - No extra data structures are used apart from variables. 
  
---

## **Conclusion**
This two-pointer method efficiently finds the maximum area while maintaining an optimal O(n) time complexity. It eliminates unnecessary comparisons by always moving the smaller height, ensuring the best possible outcome.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Explore brute force approaches for comparison (O(n²)).
- Extend the approach to 3D container problems.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
