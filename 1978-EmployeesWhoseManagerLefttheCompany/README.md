# **Employees Whose Manager Left the Company**

## **Problem Statement**
This query identifies employees who meet both of the following conditions:
  1. Have a salary below 30,000.
  2. Have a manager who does not exist in the Employees table.  
These employees report to an invalid manager ID, meaning their supervisor is not listed in the organization’s employee records.
	
**Example Input:**
  ```
  Employees table:
  +-------------+-----------+------------+--------+
  | employee_id | name      | manager_id | salary |
  +-------------+-----------+------------+--------+
  | 3           | Mila      | 9          | 60301  |
  | 12          | Antonella | null       | 31000  |
  | 13          | Emery     | null       | 67084  |
  | 1           | Kalel     | 11         | 21241  |
  | 9           | Mikaela   | null       | 50937  |
  | 11          | Joziah    | 6          | 28485  |
  +-------------+-----------+------------+--------+
  Output: 
  +-------------+
  | employee_id |
  +-------------+
  | 11          |
  +-------------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Filter employees earning below 30,000.
2. Ensure they have a manager (manager_id IS NOT NULL).
3. Exclude employees whose manager_id exists in the Employees table.
4. Sort by employee_id.

- Language: Oracle SQL
- Code:
  ```
  SELECT employee_id
  FROM (SELECT employee_id, manager_id 
          FROM Employees 
          WHERE salary < 30000)
  WHERE manager_id IS NOT NULL AND manager_id not in (SELECT employee_id FROM Employees)
  order by employee_id;
  ```
  
---

## **Use Cases**
1. HR Data Integrity Checks: Identify missing or incorrect manager assignments.
2. Employee Hierarchy Validation: Ensure all employees have valid managers.
3. Payroll & Reporting Accuracy: Prevent erroneous manager references in payroll systems.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
