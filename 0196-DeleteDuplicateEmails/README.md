# **Delete Duplicate Emails**

## **Problem Statement**
This query removes duplicate email entries from the Person table, keeping only the record with the smallest id for each email address.  
  
**Example Input:**
  ```
  Input: 
  Person table:
  +----+------------------+
  | id | email            |
  +----+------------------+
  | 1  | john@example.com |
  | 2  | bob@example.com  |
  | 3  | john@example.com |
  +----+------------------+
  Output: 
  +----+------------------+
  | id | email            |
  +----+------------------+
  | 1  | john@example.com |
  | 2  | bob@example.com  |
  +----+------------------+
  ```
---

## **Solutions Overview**
### **DELETE with Subquery Approach (Oracle SQL)**
1. Identify Duplicate Emails: The email column may contain duplicate values.
2. Keep the First Entry: Use MIN(id) to select the smallest id for each email.
3. Delete Extra Entries: Remove all records where the id is not the smallest for that email.
   
- Language: Oracle SQL
- Code:
  ```
  DELETE FROM Person
  WHERE id NOT IN (
      SELECT MIN(id)
      FROM Person
      GROUP BY email
  );
  ```
  
---

## **Use Cases**
1. Data Integrity: Ensures unique email entries in the database.
2. Avoid Redundant Data: Prevents duplicate records from affecting queries.
3. Optimized Storage: Reduces unnecessary space usage by keeping only distinct entries. 

### **Future Plans**
- Implement solutions for other SQL dialects like MySQL and PostgreSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
