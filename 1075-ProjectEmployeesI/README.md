# **Project Employees I**

## **Problem Statement**
This query retrieves the average experience (in years) of employees assigned to each project. The goal is to determine the average employee experience level for each project based on the experience_years field.  

**Example Input:**
  ```
  Project table:
  +-------------+-------------+
  | project_id  | employee_id |
  +-------------+-------------+
  | 1           | 1           |
  | 1           | 2           |
  | 1           | 3           |
  | 2           | 1           |
  | 2           | 4           |
  +-------------+-------------+
  Employee table:
  +-------------+--------+------------------+
  | employee_id | name   | experience_years |
  +-------------+--------+------------------+
  | 1           | Khaled | 3                |
  | 2           | Ali    | 2                |
  | 3           | John   | 1                |
  | 4           | Doe    | 2                |
  +-------------+--------+------------------+

  Example Output:
  +-------------+---------------+
  | project_id  | average_years |
  +-------------+---------------+
  | 1           | 2.00          |
  | 2           | 2.50          |
  +-------------+---------------+
  ```
  
- Explanation:
  1. Project 1 includes employees with experience years: 3, 2, and 1. 
     - Average: (3 + 2 + 1) / 3 = 2.00.
  2. Project 2 includes employees with experience years: 3 and 2.
     - Average: (3 + 2) / 2 = 2.50.
---

## **Solutions Overview**
### **LEFT JOIN Approach (Oracle SQL)**
1. Use LEFT JOIN to connect Project with Employee.
2. Apply AVG(e.experience_years) to compute the average experience per project.
3. Use ROUND(..., 2) to format the output to 2 decimal places.
4. Group by project_id to calculate the aggregate values per project.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT p.project_id, ROUND(AVG(e.experience_years),2) AS average_years
  FROM Project p
  LEFT JOIN Employee e
  ON p.employee_id = e.employee_id
  GROUP BY p.project_id;
  ```
  
---

## **Use Cases**
1. Project Staffing Analysis: Identify projects with higher or lower experience levels among employees.
2. Workforce Planning: Optimize project assignments based on employee experience.
3. Performance Evaluation: Compare project success rates with team experience levels.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
