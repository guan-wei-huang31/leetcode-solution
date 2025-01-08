# **Spiral Matrix II**

## **Problem Statement**
Given an integer n, generate an n x n matrix filled with elements from 1 to n^2 in spiral order. The function should return the generated matrix as a 2D vector.  

**Example Input:**
  ```
  Input: n = 3  
  Output:  
  [  
    [1, 2, 3],  
    [8, 9, 4],  
    [7, 6, 5]  
  ]
  ```
---

## **Solutions Overview**
### **Simulation Approach (C++)**
This solution uses a simulation-based approach to iteratively fill the matrix in a spiral order. The algorithm defines boundaries (xstart, ystart, offset) and iterates through four directions: top row, right column, bottom row (in reverse), and left column (in reverse). The process repeats until the matrix is completely filled.  
- Language: C++
- Code:
  ```
  #include <iostream>
  #include <vector>
  using namespace std;
  
  class Solution {
  public:
      vector<vector<int>> generateMatrix(int n) {
          vector<vector<int>> res(n, vector<int>(n, 0));
          int xstart = 0;
          int ystart = 0;
          int offset = 1;
          int loop = n / 2;
          int mid = n / 2;
          int count = 1;
          int i, j;
          while (loop--) {
              i = xstart;
              j = ystart;
              for (j; j < n - offset; j++) {
                  res[i][j] = count++;
              }
              for (i; i < n - offset; i++) {
                  res[i][j] = count++;
              }
              for (j; j > ystart; j--) {
                  res[i][j] = count++;
              }
              for (i; i > xstart; i--) {
                  res[i][j] = count++;
              }
              xstart++;
              ystart++;
              offset++;
          }
          if (n % 2) {
              res[mid][mid] = count;
          }
          return res;
      }
  };
  ```
- Time Complexity: O(n^2)  
  The algorithm visits every cell in the n x n matrix exactly once.
- Space Complexity: O(1)  
  The operation is performed in-place, with no additional memory allocation proportional to input size beyond the matrix itself.  
  
---

## **Conclusion**
This simulation-based approach efficiently generates a spiral matrix in a straightforward manner. The algorithm is easy to understand and performs well for typical use cases.  

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Add automated testing to validate the output for various edge cases.
- Optimize the algorithm for very large matrices.  

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
