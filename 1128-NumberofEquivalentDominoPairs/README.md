# **Number of Equivalent Domino Pairs**

## **Problem Statement**
This project provides a solution to the Number of Equivalent Domino Pairs problem. Given a list of domino pairs, where each domino consists of two numbers, the goal is to count the number of equivalent pairs. Two dominoes are considered equivalent if they contain the same numbers, regardless of order.  
  
**Example Input:**
  ```
  Input: dominoes = [[1,2],[1,2],[1,1],[1,2],[2,2]]
  Output: 3
  ```
---

## **Solutions Overview**

### **Hash Map Approach (C++)**
1. Use an unordered map (hashmap) to track occurrences of each unique domino.
2. Normalize each domino pair:
   - Sort the numbers (min(num[0], num[1]) and max(num[0], num[1])).
   - Encode as a unique key (10 * smaller_number + larger_number).
3. Count occurrences:
   - If the same domino has been seen before, add the existing count to count.
   - Increment hashmap[key] for tracking future matches.
3. Return count, which stores the total count of equivalent domino pairs.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int numEquivDominoPairs(vector<vector<int>>& dominoes) {
          unordered_map<int,int>hashmap;
          int count = 0;
          for (auto num : dominoes){
              int key = min(num[0],num[1])*10+max(num[0],num[1]);
              count+=hashmap[key];
              hashmap[key]++;
          } 
          return count;
      }
  };
  ```
  
- Time Complexity: O(n)  
  - Each domino is processed once, making the overall complexity O(n).
- Space Complexity: O(n)
  - The hashmap stores at most 100 unique pairs (1-9 values), making it constant space (O(1)).
---

## **Conclusion**
This hash map approach efficiently counts equivalent domino pairs in O(n) time complexity, ensuring optimal performance. The combinatorial approach further simplifies pair counting.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend the approach for larger constraints (multi-digit dominoes).
- Benchmark against brute force methods (O(n²)).
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
