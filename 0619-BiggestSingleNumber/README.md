# **Biggest Single Number**

## **Problem Statement**
This query finds the largest number that appears exactly once in the MyNumbers table.** If no such number exists, the query returns NULL.  
  
**Example Input:**
  ```
  Input: 
  MyNumbers table:
  +-----+
  | num |
  +-----+
  | 8   |
  | 8   |
  | 3   |
  | 3   |
  | 1   |
  | 4   |
  | 5   |
  | 6   |
  +-----+
  
  Output: 
  +-----+
  | num |
  +-----+
  | 6   |
  +-----+
  ```
---

## **Solutions Overview**
### **SubQuery with Grouping Approach (Oracle SQL)**
1. Group by num:
   - Ensures aggregation per unique number.
2. Filter numbers that appear exactly once:
   - Use HAVING COUNT(*) = 1.
3. Find the maximum unique number:
   - Use MAX(num) to get the largest unique number.  
   
- Language: Oracle SQL
- Code:
  ```
  SELECT MAX(num) AS num
  FROM (
      SELECT num
      FROM MyNumbers
      GROUP BY num
      HAVING COUNT(*) = 1
  );
  ```
  
---

## **Use Cases**
1. Data Cleansing: Identify unique values in large datasets.
2. Leaderboard Analysis: Find the highest unique score in a competition.
3. Statistical Insights: Determine the most significant unique data points in numeric distributions.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
