# **Number of Unique Subjects Taught by Each Teacher**

## **Problem Statement**
This query calculates the number of unique subjects each teacher teaches, regardless of the department. The query groups data by teacher_id and counts distinct subject_id values.    

**Example Input:**
  ```
  Input: 
  Teacher table:
  +------------+------------+---------+
  | teacher_id | subject_id | dept_id |
  +------------+------------+---------+
  | 1          | 2          | 3       |
  | 1          | 2          | 4       |
  | 1          | 3          | 3       |
  | 2          | 1          | 1       |
  | 2          | 2          | 1       |
  | 2          | 3          | 1       |
  | 2          | 4          | 1       |
  +------------+------------+---------+
  Output:  
  +------------+-----+
  | teacher_id | cnt |
  +------------+-----+
  | 1          | 2   |
  | 2          | 4   |
  +------------+-----+
  ```
---

## **Solutions Overview**
### **Grouping Approach (Oracle SQL)**
1. Group by teacher_id:
   - Ensures aggregation per teacher.
2. Count unique subjects:
   - Use COUNT(DISTINCT subject_id) to count unique subjects taught.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT teacher_id, COUNT(DISTINCT subject_id) AS cnt
  FROM Teacher
  GROUP BY teacher_id;
  ```
  
---

## **Use Cases**
1. Faculty Workload Analysis: Identify the diversity of subjects handled by each teacher.
2. Course Allocation Insights: Determine how many distinct subjects each teacher is responsible for.
3. Departmental Reporting: Provide summaries of subject distribution across faculty.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
