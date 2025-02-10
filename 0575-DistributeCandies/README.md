# **Distribute Candies**

## **Problem Statement**
This project provides a solution to the Distribute Candies problem. Given an array candyType, where candyType[i] represents a type of candy, the goal is to determine how many different types of candies a person can eat if they can only eat half of the total candies.
The person should maximize the number of unique candy types they eat.   

**Example Input:**
  ```
  Input: candyType = [1,1,2,2,3,3]  
  Output: 3  
  Explanation: There are 3 types of candies, and the person can eat 3 candies.

  ```
---

## **Solutions Overview**

### **Hash Map Approach (C++)**
1. Use an unordered set (hashset) to track unique candy types.
2. Iterate through candyType:
   - Insert each candy type into hashset (duplicates are automatically ignored).
3. Compare the number of unique candy types (hashset.size()) with the max candies allowed (eat = n / 2):
   -If there are fewer unique types than eat, return hashset.size().
   - Otherwise, return eat (as we cannot exceed half the total candies).
4. Return the final result.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int distributeCandies(vector<int>& candyType) {
          unordered_set<int>hashset;
          int eat = candyType.size() / 2;
          for (auto num : candyType){
              hashset.insert(num);
          }
          return min(eat, (int)hashset.size());
      }
  };
  ```
  
- Time Complexity: O(n)  
  - Each candy is processed once, making the overall complexity O(n).
- Space Complexity: O(n)
  - The hash set stores at most n/2 elements in the worst case.
---

## **Conclusion**
The hash set approach efficiently determines the maximum number of unique candies in O(n) time complexity, ensuring optimal performance.   

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend the approach for different constraints (e.g., weighted candies).
- Optimize performance for large inputs.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
