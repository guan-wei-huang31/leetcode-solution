# **Game Play Analysis I**

## **Problem Statement**
This query retrieves the first recorded login date for each player from the Activity table.

**Example Input:**
  ```
  Input: 
  Activity table:
  +-----------+-----------+------------+--------------+
  | player_id | device_id | event_date | games_played |
  +-----------+-----------+------------+--------------+
  | 1         | 2         | 2016-03-01 | 5            |
  | 1         | 2         | 2016-05-02 | 6            |
  | 2         | 3         | 2017-06-25 | 1            |
  | 3         | 1         | 2016-03-02 | 0            |
  | 3         | 4         | 2018-07-03 | 5            |
  +-----------+-----------+------------+--------------+
  Output: 
  +-----------+-------------+
  | player_id | first_login |
  +-----------+-------------+
  | 1         | 2016-03-01  |
  | 2         | 2017-06-25  |
  | 3         | 2016-03-02  |
  +-----------+-------------+
  ```
---

## **Solutions Overview**
### **GROUP Approach (Oracle SQL)**
1. Group records by player_id.
2. Use MIN(event_date) to determine the earliest recorded login per player.
3. Convert the date format to YYYY-MM-DD for consistency.

- Language: Oracle SQL
- Code:
  ```
  SELECT player_id, to_char(min(event_date),'YYYY-MM-DD') AS first_login 
  FROM Activity
  GROUP BY player_id;
  ```
  
---

## **Use Cases**
1. User Engagement Analysis: Identify when players first joined the platform.
2. Retention Metrics: Track initial player activity for engagement trends.
3. Account Age Calculation: Determine the longevity of player accounts.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
