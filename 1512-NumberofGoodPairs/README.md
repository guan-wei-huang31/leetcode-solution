# **Number of Good Pairs**

## **Problem Statement**
This project provides a solution to the Number of Good Pairs problem. Given an array nums, the goal is to count the number of good pairs, where a pair (i, j) is considered good if nums[i] == nums[j] and i < j.  

**Example Input:**
  ```
  Input: nums = [1,2,3,1,1,3]
  Output: 4
  Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
  ```
---

## **Solutions Overview**

### **Hash Map Approach (C++)**
1. Use an unordered map (hashmap) to store the frequency count of each number encountered.
2. Iterate through nums:
   - If num is already in hashmap, add the current count to result (since all previous occurrences of num form good pairs with the current num).
   - Increment hashmap[num] to update the count.
3. Return result, which stores the total count of good pairs.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int numIdenticalPairs(vector<int>& nums) {
          unordered_map<int,int>hashmap;
          int result = 0;
          for(auto num : nums){
              if(hashmap.count(num)){
                  result += hashmap[num];
              }
              hashmap[num]++;
          }
          return result;
      }
  };
  ```
  
- Time Complexity: O(n)  
  - Each element is processed once, making the overall complexity O(n).
- Space Complexity: O(n)
  - The hashmap stores at most n unique values.
---

## **Conclusion**
This hash map approach efficiently finds the number of good pairs in O(n) time complexity, ensuring optimal performance. The combinatorial approach further optimizes pair counting.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Extend the approach for counting triplets and other groupings.
- Benchmark against brute force methods (O(n²)).
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
