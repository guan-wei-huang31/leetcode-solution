# **Immediate Food Delivery II**

## **Problem Statement**
This query calculates the daily active users within a specified date range. A user is considered active if they have any recorded activity on a given date. The output lists unique active users per day.  
  
Formula Used:
Active User per Day = COUNT(DISTINCT user_id)


**Example Input:**
  ```
  Input: 
  Activity table:
  +---------+------------+---------------+---------------+
  | user_id | session_id | activity_date | activity_type |
  +---------+------------+---------------+---------------+
  | 1       | 1          | 2019-07-20    | open_session  |
  | 1       | 1          | 2019-07-20    | scroll_down   |
  | 1       | 1          | 2019-07-20    | end_session   |
  | 2       | 4          | 2019-07-20    | open_session  |
  | 2       | 4          | 2019-07-21    | send_message  |
  | 2       | 4          | 2019-07-21    | end_session   |
  | 3       | 2          | 2019-07-21    | open_session  |
  | 3       | 2          | 2019-07-21    | send_message  |
  | 3       | 2          | 2019-07-21    | end_session   |
  | 4       | 3          | 2019-06-25    | open_session  |
  | 4       | 3          | 2019-06-25    | end_session   |
  +---------+------------+---------------+---------------+
  Output: 
  +------------+--------------+ 
  | day        | active_users |
  +------------+--------------+ 
  | 2019-07-20 | 2            |
  | 2019-07-21 | 2            |
  +------------+--------------+ 
  ```
---

## **Solutions Overview**
### **Subquery with Aggregation Approach (Oracle SQL)**
1. Filter for activities within the specified date range:
   - Use BETWEEN TO_DATE('2019-06-28','YYYY-MM-DD') AND TO_DATE('2019-07-27','YYYY-MM-DD') to limit the results.
2. Group by activity date:
   - Ensures aggregation per day.
3. Count unique active users per day:
   - Use COUNT(DISTINCT user_id) to count unique users per day.
4. Format the output date:
   - Use TO_CHAR(activity_date, 'YYYY-MM-DD') for consistent formatting.

- Language: Oracle SQL
- Code:
  ```
  SELECT TO_CHAR(activity_date,'YYYY-MM-DD') AS day, 
         COUNT(DISTINCT user_id) AS active_users 
  FROM Activity
  WHERE activity_date BETWEEN TO_DATE('2019-06-28','YYYY-MM-DD') 
                          AND TO_DATE('2019-07-27','YYYY-MM-DD')
  GROUP BY activity_date
  ORDER BY day;
  ```
  
---

## **Use Cases**
1. User Engagement Analysis: Measure how many users actively engage with a platform daily.
2. App or Website Performance Tracking: Monitor daily user activity trends over time.
3. Business Reporting: Provide key insights into daily active user behavior for decision-making.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
