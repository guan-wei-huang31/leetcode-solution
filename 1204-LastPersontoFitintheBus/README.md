# **Last Person to Fit in the Bus**

## **Problem Statement**
This query finds the last person who can board within a total weight limit of 1000 units. The queue follows an ordering based on turn, and people board in sequence until the cumulative weight exceeds 1000.  

  
**Example Input:**
  ```
  Input: 
  Queue table:
  +-----------+-------------+--------+------+
  | person_id | person_name | weight | turn |
  +-----------+-------------+--------+------+
  | 5         | Alice       | 250    | 1    |
  | 4         | Bob         | 175    | 5    |
  | 3         | Alex        | 350    | 2    |
  | 6         | John Cena   | 400    | 3    |
  | 1         | Winston     | 500    | 6    |
  | 2         | Marie       | 200    | 4    |
  +-----------+-------------+--------+------+
  Output: 
  +-------------+
  | person_name |
  +-------------+
  | John Cena   |
  +-------------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Calculate cumulative weight:
   - Use SUM(WEIGHT) OVER (ORDER BY TURN) to compute a running total.
2. Identify the last valid person:
   - Select the person whose cumulative weight is the highest but still within 1000.
3. Use MAX(CUMULATIVE_WEIGHT) to get the last person.
   
- Language: Oracle SQL
- Code:
  ```
  WITH CTE AS (
      SELECT 
          person_name,
          SUM(WEIGHT) OVER (ORDER BY TURN) AS CUMULATIVE_WEIGHT
      FROM Queue
  )
  SELECT person_name 
  FROM CTE
  WHERE CUMULATIVE_WEIGHT = (
      SELECT MAX(CUMULATIVE_WEIGHT) FROM CTE WHERE CUMULATIVE_WEIGHT <= 1000
  );
  ```
  
---

## **Use Cases**
1. Weight-Restricted Boarding: Determine the last person who can board without exceeding the limit.
2. Queue Optimization: Track cumulative weights for logistical planning.
3. Simulation & Testing: Model boarding scenarios with weight constraints.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
