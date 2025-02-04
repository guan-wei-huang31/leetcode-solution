# **Classes More Than 5 Students**

## **Problem Statement**
This query retrieves classes that have at least 5 distinct students enrolled. The query groups data by class and filters out classes that do not meet the student count threshold.  
  
Formula Used:  
Valid Classes = extCount(Distinct Student) >= 5  


**Example Input:**
  ```
  Input: 
  Courses table:
  +---------+----------+
  | student | class    |
  +---------+----------+
  | A       | Math     |
  | B       | English  |
  | C       | Math     |
  | D       | Biology  |
  | E       | Math     |
  | F       | Computer |
  | G       | Math     |
  | H       | Math     |
  | I       | Math     |
  +---------+----------+
  
  Output: 
  +---------+
  | class   |
  +---------+
  | Math    |
  +---------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Group by class:
   - Ensures aggregation per class.
2. Count unique students per class:
   - Use COUNT(DISTINCT student) to avoid duplicate student enrollments.
3. Filter classes with at least 5 students:
   - Use HAVING COUNT(DISTINCT student) >= 5.

- Language: Oracle SQL
- Code:
  ```
  SELECT class
  FROM Courses
  GROUP BY class
  HAVING COUNT(DISTINCT student) >= 5;
  ```
  
---

## **Use Cases**
1. Course Popularity Analysis: Identify highly enrolled courses.
2. Class Capacity Planning: Ensure minimum viable student enrollment for classes.
3. University Curriculum Insights: Determine which courses attract large student groups.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
