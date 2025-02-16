# **Number of Students Doing Homework at a Given Time**

## **Problem Statement**
This project provides a solution to the Number of Students Doing Homework at a Given Time problem. Given two arrays, startTime and endTime, where:
- startTime[i] represents when student i starts their homework.
- endTime[i] represents when student i finishes their homework.  

The goal is to count how many students are actively doing homework at a specific queryTime.  

**Example Input:**
  ```
  Input: startTime = [1,2,3], endTime = [3,2,7], queryTime = 4
  Output: 1
  Explanation: We have 3 students where:
  The first student started doing homework at time 1 and finished at time 3 and wasn't doing anything at time 4.
  The second student started doing homework at time 2 and finished at time 2 and also wasn't doing anything at time 4.
  The third student started doing homework at time 3 and finished at time 7 and was the only student doing homework at time 4.
  ```
---

## **Solutions Overview**

### **Array Linear Search Approach (C++)**
1. Initialize count = 0 to track the number of students active at queryTime.
2. Iterate through each student (i):
  - If queryTime is between startTime[i] and endTime[i], increment count.
3. Return count, which stores the total students working at queryTime.
 
- Language: C++
- Code:
  ```
  class Solution {
  public:
      int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
          int count = 0;
          for(int i = 0; i < startTime.size(); i++){
              if(queryTime >= startTime[i] && queryTime <= endTime[i]) count++;
          }
          return count;
      }
  };
  ```
  
- Time Complexity:  O(n)  
  - Each student is checked once, leading to O(n) complexity.
The number of steps is approximately O(log n).
- Space Complexity: O(1)
  - No extra storage is used apart from a few integer variables.
  
---

## **Conclusion**
- The linear approach (O(n)) is best for single queries.

### **Future Plans**
- Add implementations in other languages, such as Java.
- Optimize for large-scale queries.
- Extend the approach to non-discrete time intervals.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
