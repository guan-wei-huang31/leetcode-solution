# **Longest Consecutive Sequence**

## **Problem Statement**
This project provides a solution to find the longest consecutive sequence of numbers in an unsorted array. The sequence must be consecutive integers appearing in any order, but the elements must be present in the array.  


**Example Input:**
  ```
  Input: nums = [100,4,200,1,3,2]
  Output: 4
  Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
  ```
---

## **Solutions Overview**

### **Hash Set Approach (C++)**
1. Insert all elements into an unordered set to allow O(1) lookups.
2. Iterate through each element:
   - If the number is not the start of a sequence (i.e., num - 1 does not exist in the set), begin a new sequence.
   - Expand the sequence by checking if num + 1 exists and incrementing num while erasing it from the set.
   - Track the maximum sequence length.
3. Return the longest sequence length.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int longestConsecutive(vector<int>& nums) {
          if (nums.size() == 0){
              return 0;
          }
          unordered_set<int>set;
          for ( int num : nums){
              set.insert(num);
          }
          int longest = 1;
          for (int num : nums ){
              if (!set.count(num-1)){
                  int current = num;
                  int currentLen = 1;
                  while(set.erase(num+1)){
                      num++;
                      currentLen++;
                  }
                  longest = max(longest, currentLen);
              }
          }
          return longest;
      }
  };
  ```
  
- Time Complexity:  O(n)  
  - Insertion into an unordered set takes O(n).
  - The iteration runs in O(n), with each element being processed once.
- Space Complexity: O(n)  
  - The set stores n elements from nums.
---

## **Conclusion**
This approach efficiently finds the longest consecutive sequence using a hash set for O(1) lookups. It avoids sorting (O(n log n)) and ensures an optimal O(n) time complexity.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Explore an optimized union-find approach.
- Benchmark performance against sorting-based solutions.

  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
