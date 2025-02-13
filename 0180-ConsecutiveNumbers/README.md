# **Consecutive Numbers**

## **Problem Statement**
This query identifies numbers that appear at least three times consecutively in the Logs table. The solution leverages window functions to compare each number with its previous two occurrences.  

  
**Example Input:**
  ```
  Input: 
  Triangle table:
  +----+----+----+
  | x  | y  | z  |
  +----+----+----+
  | 13 | 15 | 30 |
  | 10 | 20 | 15 |
  +----+----+----+
  
  Output: 
  +----+----+----+----------+
  | x  | y  | z  | triangle |
  +----+----+----+----------+
  | 13 | 15 | 30 | No       |
  | 10 | 20 | 15 | Yes      |
  +----+----+----+----------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Use LAG() window function:
   - Retrieves values from one and two rows before the current row.
2. Filter rows where num appears in three consecutive entries:
   - Ensure num = prev1 = prev2.
3. Use DISTINCT to return unique numbers.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT DISTINCT num AS ConsecutiveNums
  FROM (
      SELECT num, 
             LAG(num, 1) OVER (ORDER BY id) AS prev1,
             LAG(num, 2) OVER (ORDER BY id) AS prev2
      FROM Logs
  ) t
  WHERE num = prev1 AND num = prev2;
  ```
  
---

## **Use Cases**
1. Data Pattern Detection: Identify repeating values in datasets.
2. Anomaly Detection: Detect irregular spikes in logs.
3. Quality Control: Ensure data consistency in logs and time-series datasets. 

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
