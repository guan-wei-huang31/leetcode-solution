# **Actors and Directors Who Cooperated At Least Three Times**

## **Problem Statement**
This query identifies actor-director pairs that have collaborated at least three times.

**Example Input:**
  ```
  Input: 
  ActorDirector table:
  +-------------+-------------+-------------+
  | actor_id    | director_id | timestamp   |
  +-------------+-------------+-------------+
  | 1           | 1           | 0           |
  | 1           | 1           | 1           |
  | 1           | 1           | 2           |
  | 1           | 2           | 3           |
  | 1           | 2           | 4           |
  | 2           | 1           | 5           |
  | 2           | 1           | 6           |
  +-------------+-------------+-------------+
  Output: 
  +-------------+-------------+
  | actor_id    | director_id |
  +-------------+-------------+
  | 1           | 1           |
  +-------------+-------------+
  ```
---

## **Solutions Overview**
### **GROUP Approach (Oracle SQL)**
1. Group records by actor_id and director_id.
2. Count the number of collaborations per actor-director pair.
3. Filter results to only include pairs with COUNT(*) >= 3.

- Language: Oracle SQL
- Code:
  ```
  SELECT actor_id, director_id 
  FROM ActorDirector 
  GROUP BY actor_id, director_id
  HAVING COUNT(*) >= 3;
  ```
  
---

## **Use Cases**
1. Entertainment Industry Analytics: Identify frequent actor-director partnerships.
2. Film Production Insights: Recognize strong working relationships.
3. Collaborative Trends Analysis: Understand industry trends in actor-director collaborations.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
