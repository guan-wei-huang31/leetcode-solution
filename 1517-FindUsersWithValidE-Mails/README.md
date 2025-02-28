# **Find Users With Valid E-Mails**

## **Problem Statement**
This PL/SQL query retrieves user details from the Users table where the email address follows a specific pattern. The query ensures that only users with valid LeetCode email addresses (@leetcode.com) are selected.  

**Example Input:**
  ```
  Input: 
  Users table:
  +---------+-----------+-------------------------+
  | user_id | name      | mail                    |
  +---------+-----------+-------------------------+
  | 1       | Winston   | winston@leetcode.com    |
  | 2       | Jonathan  | jonathanisgreat         |
  | 3       | Annabelle | bella-@leetcode.com     |
  | 4       | Sally     | sally.come@leetcode.com |
  | 5       | Marwan    | quarz#2020@leetcode.com |
  | 6       | David     | david69@gmail.com       |
  | 7       | Shapiro   | .shapo@leetcode.com     |
  +---------+-----------+-------------------------+
  Output: 
  +---------+-----------+-------------------------+
  | user_id | name      | mail                    |
  +---------+-----------+-------------------------+
  | 1       | Winston   | winston@leetcode.com    |
  | 3       | Annabelle | bella-@leetcode.com     |
  | 4       | Sally     | sally.come@leetcode.com |
  +---------+-----------+-------------------------+
  ```
---

## **Solutions Overview**
### **Regular Expression Approach (Oracle SQL)**
1. SELECT user_id, name, mail
2. Retrieves the user ID, name, and email from the Users table.
3. WHERE REGEXP_LIKE(mail, '^[A-Za-z][a-zA-Z0-9_.-]*@leetcode[.]com$')
4. Filters email addresses using regular expressions (REGEXP_LIKE) to match only valid LeetCode emails.

- Language: Oracle SQL
- Code:
  ```
  SELECT user_id, name, mail
  FROM Users
  WHERE REGEXP_LIKE(mail, '^[A-Za-z][a-zA-Z0-9_.-]*@leetcode[.]com$');
  ```
  
---

## **Use Cases**
1. User Validation: Ensures users register with properly formatted LeetCode email addresses.
2. Data Cleaning: Filters out invalid or incorrectly formatted email addresses.
3. Security: Restricts email queries to LeetCode users only.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
