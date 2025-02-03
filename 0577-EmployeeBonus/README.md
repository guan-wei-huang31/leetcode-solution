# **Employee Bonus**

## **Problem Statement**
This query retrieves a list of employees who either have no recorded bonus or have a bonus amount less than 1000. The goal is to filter employees based on their eligibility for a bonus and display their respective bonus amounts.  

**Example Input:**
  ```
  Employee table:
  +-------+--------+------------+--------+
  | empId | name   | supervisor | salary |
  +-------+--------+------------+--------+
  | 3     | Brad   | null       | 4000   |
  | 1     | John   | 3          | 1000   |
  | 2     | Dan    | 3          | 2000   |
  | 4     | Thomas | 3          | 4000   |
  +-------+--------+------------+--------+
  Bonus table:
  +-------+-------+
  | empId | bonus |
  +-------+-------+
  | 2     | 500   |
  | 4     | 2000  |
  +-------+-------+

  Example Output:
  +------+-------+
  | name | bonus |
  +------+-------+
  | Brad | null  |
  | John | null  |
  | Dan  | 500   |
  +------+-------+
  ```
  
- Explanation:
  1. Employee Brad (empId = 3) does not have a bonus, so NULL is returned.
  2. Employee John (empId = 1) does not have a bonus, so NULL is returned.
  3. Employee Dan (empId = 2) has a bonus of 500, which is less than 1000, so it is included.
  4. Employee Thomas (empId = 4) has a bonus of 2000, which is not included because it exceeds 1000.

---

## **Solutions Overview**
### **LEFT JOIN Approach (Oracle SQL)**
1. Use LEFT JOIN to include all employees, ensuring those without bonuses are still displayed.
2. Filter using WHERE clause to include only employees with:
   - A bonus amount < 1000.
   - NULL values (indicating no bonus recorded).
   
- Language: Oracle SQL
- Code:
  ```
  SELECT e.name, b.bonus
  FROM Employee e
  LEFT JOIN Bonus b
  ON e.empId = b.empId
  WHERE b.bonus < 1000 OR b.bonus IS NULL;
  ```
  
---

## **Use Cases**
1. Payroll Review: Identify employees who may need a salary or bonus adjustment.
2. Employee Benefits Analysis: Ensure fair distribution of bonuses.
3. HR Decision Making: Recognize employees with low or no bonuses for potential incentives. 

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
