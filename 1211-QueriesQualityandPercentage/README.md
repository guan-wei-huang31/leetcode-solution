# **Queries Quality and Percentage**

## **Problem Statement**
This query calculates two key metrics for each query name:
1. Quality: The average of rating/position for each query.
2. Poor Query Percentage: The percentage of results with a rating lower than 3.  

**Example Input:**
  ```
  Queries table:
  +------------+-------------------+----------+--------+
  | query_name | result            | position | rating |
  +------------+-------------------+----------+--------+
  | Dog        | Golden Retriever  | 1        | 5      |
  | Dog        | German Shepherd   | 2        | 5      |
  | Dog        | Mule              | 200      | 1      |
  | Cat        | Shirazi           | 5        | 2      |
  | Cat        | Siamese           | 3        | 3      |
  | Cat        | Sphynx            | 7        | 4      |
  +------------+-------------------+----------+--------+

  Example Output:
  +------------+---------+-----------------------+
  | query_name | quality | poor_query_percentage |
  +------------+---------+-----------------------+
  | Dog        | 2.50    | 33.33                 |
  | Cat        | 0.66    | 33.33                 |
  +------------+---------+-----------------------+
  ```
  
- Explanation:
  1. Dog Queries:
    - Quality: ((5 / 1) + (5 / 2) + (1 / 200)) / 3 = 2.50
	- Poor Query Percentage: (1 / 3) * 100 = 33.33
  2. Cat Queries:
    - Quality: ((2 / 5) + (3 / 3) + (4 / 7)) / 3 = 0.66
	- Poor Query Percentage: (1 / 3) * 100 = 33.33  
	
---

## **Solutions Overview**
### **GROUP BY Approach (Oracle SQL)**
1. Calculate Query Quality:
   - Use SUM(rating / position) / COUNT(*) to compute the quality score.
   - Use ROUND(...,2) to format the result to 2 decimal places.
2. Calculate Poor Query Percentage:
   - Count entries where rating < 3 using SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END).
   - Compute the percentage by dividing by the total count and multiplying by 100.
3. Use ROUND(...,2) to ensure precision.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT query_name, 
         ROUND((SUM(rating/position) / COUNT(*)),2) AS quality,
         ROUND
          (
            (SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END) / COUNT(*)) * 100,2
          ) AS poor_query_percentage
  FROM Queries
  GROUP BY query_name;
  ```
  
---

## **Use Cases**
1. Search Engine Optimization: Evaluate the quality of search queries.
2. User Experience Improvement: Identify queries that frequently return poor results.
3. Data Quality Analysis: Ensure query results maintain high relevance and accuracy.  

### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
