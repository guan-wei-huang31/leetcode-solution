# **Duplicate Emails**

## **Problem Statement**
This query identifies emails that appear more than once in the Person table. 

**Example Input:**
  ```
  Input: 
  Person table:
  +----+---------+
  | id | email   |
  +----+---------+
  | 1  | a@b.com |
  | 2  | c@d.com |
  | 3  | a@b.com |
  +----+---------+
  Output: 
  +---------+
  | Email   |
  +---------+
  | a@b.com |
  +---------+
  ```
---

## **Solutions Overview**
### **GROUP Approach (Oracle SQL)**
1. Group records by email.
2. Count occurrences of each email.
3. Return emails where the count is greater than one.

- Language: Oracle SQL
- Code:
  ```
  SELECT email
  FROM Person
  GROUP BY emaiL
  HAVING COUNT(id) > 1;
  ```
  
---

## **Use Cases**
1. Data Deduplication: Identify duplicate email entries in databases.
2. User Management: Prevent duplicate email registrations.
3. Data Quality Assurance: Ensure unique email constraints are followed.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
