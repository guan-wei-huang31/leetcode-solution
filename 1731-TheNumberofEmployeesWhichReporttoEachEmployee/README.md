# **The Number of Employees Which Report to Each Employee**

## **Problem Statement**
This query calculates the number of direct reports each employee has and the average age of their reports. The result includes only employees who have at least one direct report.  
  
**Example Input:**
  ```
  Input: 
  Employees table:
  +-------------+---------+------------+-----+
  | employee_id | name    | reports_to | age |
  +-------------+---------+------------+-----+
  | 9           | Hercy   | null       | 43  |
  | 6           | Alice   | 9          | 41  |
  | 4           | Bob     | 9          | 36  |
  | 2           | Winston | null       | 37  |
  +-------------+---------+------------+-----+
  
  Output: 
  +-------------+-------+---------------+-------------+
  | employee_id | name  | reports_count | average_age |
  +-------------+-------+---------------+-------------+
  | 9           | Hercy | 2             | 39          |
  +-------------+-------+---------------+-------------+
  ```
---

## **Solutions Overview**
### **JOIN with Grouping Approach (Oracle SQL)**
1. Identify managers:
   - Employees who appear in the reports_to column.
2. Count direct reports:
   - Use COUNT(*) to count the employees reporting to each manager.
3. Calculate average age of reports:
   - Use ROUND(AVG(age)) to compute the average age.
4. Group by manager ID (employee_id):
   - Ensures calculations are performed per manager.
5. Order results by employee_id.

- Language: Oracle SQL
- Code:
  ```
  SELECT m.employee_id, m.name, 
          COUNT(*) AS reports_count, 
          ROUND(AVG(e.age)) AS average_age
  FROM Employees m
  INNER JOIN Employees e
  ON m.employee_id = e.reports_to
  GROUP BY m.employee_id, m.name
  ORDER BY m.employee_id;
  ```
  
---

## **Use Cases**
1. Employee Management Analysis: Track reporting structure within an organization.
2. Workforce Planning: Analyze leadership distribution and team structures.
3. HR Insights: Determine employee age distribution within management hierarchies.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
