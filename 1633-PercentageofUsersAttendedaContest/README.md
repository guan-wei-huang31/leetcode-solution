# **Percentage of Users Attended a Contest**

## **Problem Statement**
This query calculates the percentage of users who registered for each contest compared to the total number of users in the Users table. The results are sorted by percentage in descending order and contest_id in ascending order.  
Formula:
Percentage = (Users Registered for Contest / Total Users) * 100  
   

**Example Input:**
  ```
  Users table:
  +---------+-----------+
  | user_id | user_name |
  +---------+-----------+
  | 6       | Alice     |
  | 2       | Bob       |
  | 7       | Alex      |
  +---------+-----------+
  Register table:
  +------------+---------+
  | contest_id | user_id |
  +------------+---------+
  | 215        | 6       |
  | 209        | 2       |
  | 208        | 2       |
  | 210        | 6       |
  | 208        | 6       |
  | 209        | 7       |
  | 209        | 6       |
  | 215        | 7       |
  | 208        | 7       |
  | 210        | 2       |
  | 207        | 2       |
  | 210        | 7       |
  +------------+---------+

  Example Output:
  +------------+------------+
  | contest_id | percentage |
  +------------+------------+
  | 208        | 100.0      |
  | 209        | 100.0      |
  | 210        | 100.0      |
  | 215        | 66.67      |
  | 207        | 33.33      |
  +------------+------------+
  ```
  
---

## **Solutions Overview**
### **LEFT JOIN with Aggregation Approach (Oracle SQL)**
1. Join Register with Users to count distinct users registered for each contest.
2. Calculate the total number of users using a subquery.
3. Compute the registration percentage using:
   - COUNT(reg.user_id) / (SELECT COUNT(*) FROM Users) * 100.
   - Use ROUND(...,2) to format the output to two decimal places.
4. Sort by percentage DESC, contest_id ASC.  

- Language: Oracle SQL
- Code:
  ```
  SELECT reg.contest_id, 
         ROUND( 100* COUNT(reg.user_id) / 
               (
                  SELECT COUNT(*)
                  FROM Users
               )
         ,2)
         AS percentage
  FROM Register reg
  LEFT JOIN Users u
  ON reg.user_id = u.user_id
  GROUP BY reg.contest_id
  ORDER BY percentage DESC, reg.contest_id ASC;
  ```
  
---

## **Use Cases**
1. Contest Participation Analysis: Identify contests with high or low user engagement.
2. Event Planning: Optimize event registration strategies based on participation rates.
3. User Activity Monitoring: Track active users across different contests.  
### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
