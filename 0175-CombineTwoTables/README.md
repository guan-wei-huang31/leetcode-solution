# **Combine Two Tables**

## **Problem Statement**
This query retrieves all persons and their respective addresses, ensuring that individuals without a registered address still appear in the output with NULL values for city and state.  

**Example Input:**
  ```
  Input: 
  Person table:
  +----------+----------+-----------+
  | personId | lastName | firstName |
  +----------+----------+-----------+
  | 1        | Wang     | Allen     |
  | 2        | Alice    | Bob       |
  +----------+----------+-----------+
  Address table:
  +-----------+----------+---------------+------------+
  | addressId | personId | city          | state      |
  +-----------+----------+---------------+------------+
  | 1         | 2        | New York City | New York   |
  | 2         | 3        | Leetcode      | California |
  +-----------+----------+---------------+------------+
  Output: 
  +-----------+----------+---------------+----------+
  | firstName | lastName | city          | state    |
  +-----------+----------+---------------+----------+
  | Allen     | Wang     | Null          | Null     |
  | Bob       | Alice    | New York City | New York |
  +-----------+----------+---------------+----------+
  ```
---

## **Solutions Overview**
### **JOIN Approach (Oracle SQL)**
This approach retrieves all persons along with their respective addresses, ensuring that persons without an address are included with NULL values.  
1. Select all persons from the Person table.
2. Use a LEFT JOIN to bring in matching addresses from the Address table.
3. Ensure persons without addresses still appear in the results with NULL values.
4. Sort the output by personId.

- Language: Oracle SQL
- Code:
  ```
  SELECT P.firstName, P.lastName, A.city, A.state    
  FROM Person P
  LEFT JOIN Address A
  ON P.personId = A.personId 
  ORDER BY P.personId;
  ```
  
---

## **Use Cases**
1. Data Integrity Checks: Ensure all persons are included in reports, even if they lack address records.
2. Address Validation: Identify persons without registered addresses.
3. Customer Profile Completion: Improve data quality by identifying missing address details. 

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Optimize query performance for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
