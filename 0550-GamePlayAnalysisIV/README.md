# **Game Play Analysis IV**

## **Problem Statement**
This query calculates the fraction of players who logged in again exactly one day after their first login. The calculation considers only the first recorded login of each player.  
  
Formula Used:
Fraction = (Players Who Logged In Next Day) / (Total Players)


**Example Input:**
  ```
  Input:
  Activity table:
  +-----------+-----------+------------+--------------+
  | player_id | device_id | event_date | games_played |
  +-----------+-----------+------------+--------------+
  | 1         | 2         | 2016-03-01 | 5            |
  | 1         | 2         | 2016-03-02 | 6            |
  | 2         | 3         | 2017-06-25 | 1            |
  | 3         | 1         | 2016-03-02 | 0            |
  | 3         | 4         | 2018-07-03 | 5            |
  +-----------+-----------+------------+--------------+
  Output: 
  +-----------+
  | fraction  |
  +-----------+
  | 0.33      |
  +-----------+
  ```
---

## **Solutions Overview**
### **Subquery with Aggregation Approach (Oracle SQL)**
1. Find the first login for each player:
   - Use MIN(event_date) grouped by player_id.
2. Check if the player logged in exactly one day later:
   - Use LEFT JOIN to match the player's first event date with an entry that occurs the next day (A.event_date + 1 = B.event_date).
   - Assign 1 if the condition matches, otherwise 0.
3. Compute the fraction:
   - Use SUM() to count the number of players who logged in the next day.
   - Use COUNT(DISTINCT player_id) to count the total number of unique players.
   - Use ROUND(...,2) to format the result to two decimal places.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT ROUND(SUM(
      CASE WHEN
      A.event_date + 1 = B.event_date
      THEN 1
      ELSE 0
      END ) / COUNT(DISTINCT A.player_id),2) AS fraction  
  FROM (
      SELECT player_id, MIN(event_date) AS event_date
      FROM Activity
      GROUP BY player_id
  ) A
  LEFT JOIN Activity B
  ON A.player_id = B.player_id;
  ```
  
---

## **Use Cases**
1. User Retention Analysis: Measure how many players return the day after their first login.
2. Gaming Engagement Tracking: Assess whether a game encourages users to return after their first play session.
3. Churn Prediction: Identify players who are less likely to continue playing after their first login.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
