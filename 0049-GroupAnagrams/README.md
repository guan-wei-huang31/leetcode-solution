# **Group Anagrams**

## **Problem Statement**
This project provides a solution to group anagrams from a given list of strings.
Anagrams are words or phrases formed by rearranging the letters of another word while keeping the same character count. The goal is to return a list of grouped anagrams.  
**Example Input:**
  ```
  Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
  Output: [["eat", "tea", "ate"], ["tan", "nat"], ["bat"]]
  ```
---

## **Solutions Overview**
### **Sorting-Based Hash Map Approach (C++)**
1. Create an unordered map (unordered_map<string, vector<string>>) to store sorted words as keys and their corresponding anagrams as values.
2. Iterate through each word in the given list:
   - Sort the word alphabetically to create a unique key.
   - Use this sorted word as a key in the hash map and append the original word to the associated vector.
3. Traverse the hash map and store all grouped anagrams in a result vector.
4. Return the final result.

  ```
  - Hash Map:
  { "aet" : ["eat", "tea", "ate"]
    "ant" : ["tan", "nat"]
    "abt" : ["bat"]
  }
  ```

- Language: C++
- Code:
  ```
  class Solution {
  public:
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string, vector<string>>map;
          for(string element : strs){
              string word = element;
              sort(begin(word),end(word));
              map[word].push_back(element);
          }
          vector<vector<string>> result;
          for (auto pair : map){
              result.push_back(pair.second);
          }
          return result;
      }
  };
  ```

- Time Complexity: O(n * k log k)  
  - Sorting each word takes O(k log k) (where k is the maximum word length).
  - Inserting and retrieving from the unordered map takes O(1) on average.
  - Overall, for n words, the time complexity is O(n * k log k).
- Space Complexity: O(n * k)  
  - The hash map stores all words, so in the worst case, it takes O(n * k) space.  
  
---

## **Conclusion**
This sorting-based hash map approach efficiently groups anagrams by leveraging sorting as a unique identifier. It is a straightforward yet effective method to solve the problem optimally.  

### **Future Plans**
- Add implementations in other languages, such as Java, Python.
- Create automated tests to validate edge cases.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
