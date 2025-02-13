# **Top K Frequent Elements**

## **Problem Statement**
This project provides a solution to determine the k most frequent elements in an array. Given an array of integers nums and an integer k, the function returns the k most frequent elements in descending order of their frequency.  

**Example Input:**
  ```
  Input: nums = [1,1,1,2,2,3], k = 2  
  Output: [1, 2]
  ```
---

## **Solutions Overview**

### **Hash Map with Sorting Approach (C++)**
1. Use an unordered map to store the frequency of each number in the given array.
2. Iterate through the array and update the frequency count in the map.
3. Convert the frequency map into a vector of pairs, where each pair consists of the frequency and the corresponding number.
4. Sort the vector in descending order based on frequency.
5. Extract the top k elements from the sorted list and return them as the result.  

- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<int> topKFrequent(vector<int>& nums, int k) {
          unordered_map<int, int>map;
          for(int x : nums){
              map[x]++;
          }
          vector<pair<int,int>> freq;
          for(auto p : map){
              freq.push_back({p.second,p.first});
          }
          sort(freq.rbegin(),freq.rend());
          vector<int> result;
          for(int i = 0; i < k; i++){
              result.push_back(freq[i].second);
          }
          return result;
      }
  };
  ```
  
- Time Complexity: O(n log n)  
   - Constructing the frequency map takes O(n).
   - Sorting the frequency vector takes O(n log n).
   - Extracting k elements takes O(k).
   - The overall complexity is O(n log n) due to sorting.
- Space Complexity: O(n)  
   - The frequency map requires O(n) space.
   - The frequency vector also takes O(n) space.
   - The result vector requires O(k) space.
---

## **Conclusion**
Both the sorting-based and heap-based approaches effectively identify the top k frequent elements. The sorting method is straightforward and efficient for small inputs, while the heap-based method is more optimal for large datasets where k << n.  

### **Future Plans**
- Add implementations in other languages, such as Java.
- Optimize the algorithm using bucket sorting.
- Add performance benchmarks comparing different approaches.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
