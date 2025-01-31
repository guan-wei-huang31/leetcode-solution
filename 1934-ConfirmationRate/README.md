# **Confirmation Rate**

## **Problem Statement**
This query calculates the confirmation rate for each user by determining the proportion of confirmation actions relative to the total number of requests. If a user has no confirmation requests, their rate is recorded as 0.00.   
Formula:  
\(\text{Confirmation Rate} = \frac{\sum (\text{confirmed actions})}{\text{total confirmation requests}}\)
  
  
**Example Input:**
  ```
  Signups table:
  +---------+---------------------+
  | user_id | time_stamp          |
  +---------+---------------------+
  | 3       | 2020-03-21 10:16:13 |
  | 7       | 2020-01-04 13:57:59 |
  | 2       | 2020-07-29 23:09:44 |
  | 6       | 2020-12-09 10:39:37 |
  +---------+---------------------+
  Confirmations table:
  +---------+---------------------+-----------+
  | user_id | time_stamp          | action    |
  +---------+---------------------+-----------+
  | 3       | 2021-01-06 03:30:46 | timeout   |
  | 3       | 2021-07-14 14:00:00 | timeout   |
  | 7       | 2021-06-12 11:57:29 | confirmed |
  | 7       | 2021-06-13 12:58:28 | confirmed |
  | 7       | 2021-06-14 13:59:27 | confirmed |
  | 2       | 2021-01-22 00:00:00 | confirmed |
  | 2       | 2021-02-28 23:59:59 | timeout   |
  +---------+---------------------+-----------+

  Example Output:
  +---------+-------------------+
  | user_id | confirmation_rate |
  +---------+-------------------+
  | 6       | 0.00              |
  | 3       | 0.00              |
  | 7       | 1.00              |
  | 2       | 0.50              |
  +---------+-------------------+
  ```
---

## **Solutions Overview**
### **LEFT JOIN with Conditional Aggregation Approach (Oracle SQL)**
1. Join Signups with Confirmations to include users even if they never requested confirmation.
2. Use CASE WHEN inside AVG():
   - Assign 1 for confirmed actions.
   - Assign 0 for all other actions (timeout or missing records).
   - Compute the average across all confirmation requests.
3. Use ROUND(...,2) to format the result to two decimal places.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT s.user_id,
         ROUND(AVG(
          CASE WHEN action = 'confirmed'
               THEN 1
               ELSE 0
          END
         ),2) AS confirmation_rate
  FROM Signups s
  LEFT JOIN Confirmations c
  ON s.user_id = c.user_id
  GROUP BY s.user_id;
  ```
  
---

## **Use Cases**
1. User Engagement Analysis: Evaluate the likelihood of users confirming requests.
2. System Performance Monitoring: Identify users with a high timeout rate.
3. Customer Support Insights: Target users who may need assistance with confirmations.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
