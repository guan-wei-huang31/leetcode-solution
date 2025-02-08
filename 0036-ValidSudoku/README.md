# **Valid Sudoku**

## **Problem Statement**
This project provides a solution to validate a given 9×9 Sudoku board. The Sudoku board must adhere to the following rules:
1. Each row must contain the digits 1-9 without repetition.
2. Each column must contain the digits 1-9 without repetition.
3. Each of the 9 sub-boxes (3×3 grids) must contain the digits 1-9 without repetition.  
The input is a 9×9 board where empty cells are represented by '.'.  

**Example Input:**
  ```
  Input:
  board = 
  [["5","3",".",".","7",".",".",".","."]
   ["6",".",".","1","9","5",".",".","."]
   [".","9","8",".",".",".",".","6","."]
   ["8",".",".",".","6",".",".",".","3"]
   ["4",".",".","8",".","3",".",".","1"]
   ["7",".",".",".","2",".",".",".","6"]
   [".","6",".",".",".",".","2","8","."]
   [".",".",".","4","1","9",".",".","5"]
   [".",".",".",".","8",".",".","7","9"]]
  
  Output: True

  ```
---

## **Solutions Overview**

### **Hash Set Approach (C++)**
1. Create three arrays of unordered sets to track seen numbers:
   - row[9]: Tracks numbers present in each row.
   - col[9]: Tracks numbers present in each column.
   - box[9]: Tracks numbers present in each 3×3 sub-box.
2. Traverse the board:
   - If a cell is empty ('.'), continue.
   - Calculate the box index using the formula: boxIndex = (i/3) * 3 + j / 3
   - Check if the current number exists in the corresponding row, column, or box. If so, return false.
   - Otherwise, insert the number into the respective sets.
3. If no violations occur, return true.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      bool isValidSudoku(vector<vector<char>>& board) {
          unordered_set<char>col[9],row[9],box[9];
          for (int i = 0; i < 9; i++){
              for (int j = 0; j < 9; j++){
                  if (board[i][j] == '.'){
                      continue;
                  }
                  char num = board[i][j];
                  int boxIndex = (i/3) * 3 + j / 3;
                  if (col[j].count(num) || row[i].count(num) || box[boxIndex].count(num)){
                      return false;
                  }
                  col[j].insert(num);
                  row[i].insert(num);
                  box[boxIndex].insert(num);
              }
          }
          return true;
      }
  };
  ```
  
- Time Complexity: O(81) ≈ O(1)  
  - We iterate through all 9×9 = 81 elements once, making this a constant-time operation.
- Space Complexity: O(27) ≈ O(1)  
  - Three arrays of sets store at most 9 elements each.
---

## **Conclusion**
This approach efficiently validates a Sudoku board using hash sets to track row, column, and sub-box constraints. The solution operates in constant time and space, making it optimal for Sudoku validation tasks.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Optimize memory by using bitwise operations instead of unordered sets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
