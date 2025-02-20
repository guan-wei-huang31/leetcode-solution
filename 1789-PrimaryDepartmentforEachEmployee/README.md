# **Primary Department for Each Employee**

## **Problem Statement**
This query retrieves the primary department for each employee. An employee's primary department is determined by either:
 1. Having only one department (i.e., they appear only once in the Employee table).
 2. Explicitly marked as primary with primary_flag = 'Y'.  
  
**Example Input:**
  ```
  Input: 
  Employee table:
  +-------------+---------------+--------------+
  | employee_id | department_id | primary_flag |
  +-------------+---------------+--------------+
  | 1           | 1             | N            |
  | 2           | 1             | Y            |
  | 2           | 2             | N            |
  | 3           | 3             | N            |
  | 4           | 2             | N            |
  | 4           | 3             | Y            |
  | 4           | 4             | N            |
  +-------------+---------------+--------------+
  
  Output: 
  +-------------+---------------+
  | employee_id | department_id |
  +-------------+---------------+
  | 1           | 1             |
  | 2           | 1             |
  | 3           | 3             |
  | 4           | 3             |
  +-------------+---------------+
  ```
---

## **Solutions Overview**
### **SubQuery with Grouping Approach (Oracle SQL)**
1. Select employees appearing in only one department:
   - Use HAVING COUNT(employee_id) = 1 to filter employees who belong to only one department.
2. Select employees explicitly marked with primary_flag = 'Y'.
3. Combine both cases using OR. 
   
- Language: Oracle SQL
- Code:
  ```
  SELECT employee_id, department_id
  FROM Employee
  WHERE employee_id in (
    SELECT employee_id
    FROM Employee
    GROUP BY employee_id
    HAVING COUNT(employee_id) = 1
  ) OR primary_flag = 'Y';
  ```
  
---

## **Use Cases**
1. HR Departmental Analysis: Identify employees' primary department assignments.
2. Payroll Processing: Ensure each employee has a unique and valid department for payroll.
3. Organizational Hierarchy Management: Track employee department allocations efficiently.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
