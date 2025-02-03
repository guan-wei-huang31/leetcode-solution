# **Not Boring Movies**

## **Problem Statement**
This query retrieves a list of employees who either have no recorded bonus or have a bonus amount less than 1000. The goal is to filter employees based on their eligibility for a bonus and display their respective bonus amounts.  

**Example Input:**
  ```
  Cinema table:
  +----+------------+-------------+--------+
  | id | movie      | description | rating |
  +----+------------+-------------+--------+
  | 1  | War        | great 3D    | 8.9    |
  | 2  | Science    | fiction     | 8.5    |
  | 3  | irish      | boring      | 6.2    |
  | 4  | Ice song   | Fantacy     | 8.6    |
  | 5  | House card | Interesting | 9.1    |
  +----+------------+-------------+--------+

  Example Output:
  +----+------------+-------------+--------+
  | id | movie      | description | rating |
  +----+------------+-------------+--------+
  | 5  | House card | Interesting | 9.1    |
  | 1  | War        | great 3D    | 8.9    |
  +----+------------+-------------+--------+
  ```
  
- Explanation:
  1. Movies with odd-numbered ids: 1, 3, and 5.
  2. The movie with id = 3 has the description 'boring', so it is excluded.
  3. Remaining movies id = 1 and id = 5 are included.
  4. Movies are sorted by rating in descending order.
---

## **Solutions Overview**
### **Filtering Approach (PostgreSQL)**
1. Use WHERE id % 2 = 1 to filter odd-numbered IDs.
2. Use AND description <> 'boring' to exclude boring movies.
3. Sort results by rating in descending order using ORDER BY rating DES
   
- Language: PostgreSQL
- Code:
  ```
  SELECT id, movie, description, rating
  FROM Cinema
  WHERE id % 2 = 1 AND description <> 'boring'
  ORDER BY rating DESC; 
  ```
  
---

## **Use Cases**
1. Movie Recommendation: Helps recommend non-boring movies with high ratings.
2. Entertainment Analytics: Identify high-rated films that have unique appeal.
3. Customer Preference Analysis: Filter out low-rated or unappealing content.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
