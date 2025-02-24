# **Swap Salary**

## **Problem Statement**
This query updates the sex column in the Salary table, swapping 'm' with 'f' and vice versa.

**Example Input:**
  ```
  Input: 
  Salary table:
  +----+------+-----+--------+
  | id | name | sex | salary |
  +----+------+-----+--------+
  | 1  | A    | m   | 2500   |
  | 2  | B    | f   | 1500   |
  | 3  | C    | m   | 5500   |
  | 4  | D    | f   | 500    |
  +----+------+-----+--------+
  Output: 
  +----+------+-----+--------+
  | id | name | sex | salary |
  +----+------+-----+--------+
  | 1  | A    | f   | 2500   |
  | 2  | B    | m   | 1500   |
  | 3  | C    | f   | 5500   |
  | 4  | D    | m   | 500    |
  +----+------+-----+--------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Use UPDATE to modify the Salary table.
2. Use CASE to check if sex is 'm', then change it to 'f', and vice versa.

- Language: Oracle SQL
- Code:
  ```
  UPDATE Salary SET
  sex = (CASE WHEN sex='m' THEN 'f' ELSE 'm' END);
  ```
  
---

## **Use Cases**
1. Data Normalization: Ensure data consistency by applying transformations.
2. Data Quality Checks: Identify incorrect or misrepresented gender data.
3. Gender-based Analysis Adjustments: Adjust data for testing different scenarios.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
