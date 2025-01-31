# **Replace Employee ID With The Unique Identifier**

## **Problem Statement**
This query retrieves a list of employees along with their unique IDs, if available. Employees who do not have a unique ID will display NULL in the result. The goal is to ensure all employees are listed, even if they do not have a matching record in the EmployeeUNI table.  

**Example Input:**
  ```
  Employees Table:
  +----+----------+
  | id | name     |
  +----+----------+
  | 1  | Alice    |
  | 7  | Bob      |
  | 11 | Meir     |
  | 90 | Winston  |
  | 3  | Jonathan |
  +----+----------+
  
  EmployeeUNI Table:
  +----+-----------+
  | id | unique_id |
  +----+-----------+
  | 3  | 1         |
  | 11 | 2         |
  | 90 | 3         |
  +----+-----------+

  Example Output:
  +-----------+----------+
  | unique_id | name     |
  +-----------+----------+
  | null      | Alice    |
  | null      | Bob      |
  | 2         | Meir     |
  | 3         | Winston  |
  | 1         | Jonathan |
  +-----------+----------+
  ```
  
- Explanation:
  1. Alice and Bob do not have a unique ID, so NULL is displayed.
  2. The unique ID of Meir is 2.
  3. The unique ID of Winston is 3.
  4. The unique ID of Jonathan is 1.
---

## **Solutions Overview**
### **LEFT JOIN Approach (MySQL)**
1. Use LEFT JOIN to include all employees:
   - Ensures that all employees from the Employees table appear in the result, even if they do not have a corresponding entry in EmployeeUNI.
2. Match records based on employee ID:
   - Join EmployeeUNI on id to retrieve the corresponding unique_id.
3. Display NULL if no unique ID exists:
   - If there is no matching unique_id, the result will show NULL.
   
- Language: MySQL
- Code:
  ```
  SELECT u.unique_id, e.name
  FROM Employees e
  LEFT JOIN EmployeeUNI u
  ON e.id = u.id;
  ```
  
---

## **Use Cases**
1. Employee Management: Display employees along with their unique IDs.
2. Data Consistency Checks: Identify employees who do not have unique IDs assigned.
3. Reporting & Analytics: Generate reports that show which employees are missing unique identifiers.  

### **Future Plans**
- Add implementations in other languages, such as Oracle SQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
