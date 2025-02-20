# **Find Followers Count**

## **Problem Statement**
This query calculates the number of unique followers each user has by counting distinct follower_id values for each user_id. The output lists the user along with their follower count, sorted by user_id.  
  
Formula Used:  
Followers Count = COUNT(DISTINCT follower_id)    


**Example Input:**
  ```
  Input: 
  Followers table:
  +---------+-------------+
  | user_id | follower_id |
  +---------+-------------+
  | 0       | 1           |
  | 1       | 0           |
  | 2       | 0           |
  | 2       | 1           |
  +---------+-------------+
  
  Output: 
  +---------+----------------+
  | user_id | followers_count|
  +---------+----------------+
  | 0       | 1              |
  | 1       | 1              |
  | 2       | 2              |
  +---------+----------------+
  ```
---

## **Solutions Overview**
### **Grouping Approach (Oracle SQL)**
1. Group by user_id:
   - Ensures aggregation per user.
2. Count unique followers:
   - Use COUNT(DISTINCT follower_id) to avoid duplicate follower counts.
3. Sort results by user_id:
   - Orders the output in ascending order.

- Language: Oracle SQL
- Code:
  ```
  SELECT user_id, COUNT(DISTINCT follower_id) AS followers_count
  FROM Followers
  GROUP BY user_id
  ORDER BY user_id;
  ```
  
---

## **Use Cases**
1. Social Network Analytics: Identify the number of followers each user has.
2. Influencer Identification: Determine which users have the most followers.
3. User Engagement Insights: Track follower growth trends for user engagement analysis.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
