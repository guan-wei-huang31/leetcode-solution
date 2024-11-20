# **Single Number**

## **Problem Statement**
This project includes a solution to find the element in an array where every other element appears exactly twice except for one. The task is to identify the single number efficiently.

**Example Input:**
  ```
  Input: nums = [4, 1, 2, 1, 2]
  Output: 4
  ```
---

## **Solutions Overview**
### **Dictionary Approach (Python)**
The dictionary approach is used to solve this problem by leveraging the ability to count occurrences of each number in the array. The solution works as follows:
1. Use a dictionary to store the frequency of each number in the array.
2. Traverse the array to populate the dictionary with the count of each element.
3. Iterate through the dictionary and find the key (number) that has a value of 1, which represents the single number.

- Language: Python
- Code:
  ```
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dic = {}  
        for num in nums:
            dic[num] = dic.get(num, 0) + 1  
        for key, val in dic.items():  
            if val == 1:
                return key
  ```

- Time Complexity: O(n)
  Counting the occurrences in the array takes O(n) and Iterating through the dictionary to find the unique number takes O(n) in the worst case.
- Space Complexity: O(n)
  The dictionary stores up to n entries in the worst case.

---

## **Conclusion**
The dictionary approach is a clear and easy-to-implement solution for the "Single Number" problem. While it uses additional space to store the frequency dictionary, its time complexity is linear, making it an efficient solution for this task.

### **Future Plans**
- Add alternate approaches, such as the XOR method, which achieves the same goal with O(1) space complexity.
- Add implementations in other languages, such as Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
