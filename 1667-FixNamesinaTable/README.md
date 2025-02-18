# **Fix Names in a Table**

## **Problem Statement**
This query formats the name field in the Users table by ensuring the first letter is capitalized and the remaining letters are in lowercase.
  
**Example Input:**
  ```
  Input: 
  Users table:
  +---------+-------+
  | user_id | name  |
  +---------+-------+
  | 1       | aLice |
  | 2       | bOB   |
  +---------+-------+
  Output: 
  +---------+-------+
  | user_id | name  |
  +---------+-------+
  | 1       | Alice |
  | 2       | Bob   |
  +---------+-------+
  ```
---

## **Solutions Overview**
### **String Function Approach (Oracle SQL)**
1. Extract the First Letter: Use SUBSTR(name, 1, 1) to retrieve the first character of the name.
2. Convert the First Letter to Uppercase: Apply UPPER() to capitalize the extracted letter.
3. Extract the Remaining Letters: Use SUBSTR(name, 2) to get all characters after the first one.
4. Convert the Remaining Letters to Lowercase: Apply LOWER() to ensure uniform casing.
5. Concatenate Both Parts: Use the || operator to merge the uppercase first letter with the lowercase remainder.
5. Sort the Results: Apply ORDER BY user_id to maintain ordered output.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT user_id, 
         UPPER(SUBSTR(name, 1, 1)) || LOWER(SUBSTR(name, 2)) AS name
  FROM Users
  ORDER BY user_id;
  ```
  
---

## **Use Cases**
1. Standardized User Data: Ensures uniform formatting of user names in the database.
2. Improved Readability: Prevents inconsistent casing in stored names.
3. Enhanced User Experience: Provides a consistent naming convention for applications using this data. 

### **Future Plans**
- Implement solutions for other SQL dialects like MySQL and PostgreSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
