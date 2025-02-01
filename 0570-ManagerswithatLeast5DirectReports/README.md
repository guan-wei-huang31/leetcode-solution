# **Managers with at Least 5 Direct Reports**

## **Problem Statement**
This query retrieves the names of employees who manage at least five other employees within the company. The goal is to identify managers with a significant number of direct reports.  

**Example Input:**
  ```
  Employee table:
  +-----+-------+------------+-----------+
  | id  | name  | department | managerId |
  +-----+-------+------------+-----------+
  | 101 | John  | A          | null      |
  | 102 | Dan   | A          | 101       |
  | 103 | James | A          | 101       |
  | 104 | Amy   | A          | 101       |
  | 105 | Anne  | A          | 101       |
  | 106 | Ron   | B          | 101       |
  +-----+-------+------------+-----------+

  Example Output:
  +------+
  | name |
  +------+
  | John |
  +------+
  ```
  
- Explanation:
  1. Employee John (id = 101) manages five employees (Dan, James, Amy, Anne, and Ron).
  2. Since John has at least five direct reports, he is included in the output.  
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Use a subquery to count the number of employees each manager supervises.
   - Filter for managers who have five or more direct reports.
2. Retrieve the name of such managers.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT name
  FROM Employee
  WHERE id in (SELECT managerId 
               FROM Employee
               GROUP BY managerId
               HAVING COUNT(*) >= 5
               );
  ```
  
---

## **Use Cases**
1. HR Analytics: Identify managers with large teams to provide leadership training or workload assessment.
2. Organizational Structure Analysis: Detect bottlenecks where a single manager oversees too many employees.
3. Workforce Planning: Ensure balanced team distribution across departments.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
