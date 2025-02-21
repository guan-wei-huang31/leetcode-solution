# **Employees Earning More Than Their Managers**

## **Problem Statement**
This query identifies employees whose salary is greater than that of their direct manager.  

**Example Input:**
  ```
  Input: 
  Employee table:
  +----+-------+--------+-----------+
  | id | name  | salary | managerId |
  +----+-------+--------+-----------+
  | 1  | Joe   | 70000  | 3         |
  | 2  | Henry | 80000  | 4         |
  | 3  | Sam   | 60000  | Null      |
  | 4  | Max   | 90000  | Null      |
  +----+-------+--------+-----------+
  Output: 
  +----------+
  | Employee |
  +----------+
  | Joe      |
  +----------+
  ```
---

## **Solutions Overview**
### **JOIN Approach (Oracle SQL)**
1. Perform an INNER JOIN between Employee table and itself, linking employees to their respective managers.
2. Compare the salary of the employee to their manager.
3. Return only employees whose salary is greater than their manager’s.

- Language: Oracle SQL
- Code:
  ```
  SELECT E.name AS Employee 
  FROM Employee E
  INNER JOIN Employee M
  ON E.managerId = M.id
  WHERE E.salary > M.salary;
  ```
  
---

## **Use Cases**
1. Salary Disparity Analysis: Identify employees earning more than their managers.
2. HR Compensation Checks: Validate managerial pay structures.
3. Organizational Hierarchy Audits: Ensure logical salary progression within the company.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
