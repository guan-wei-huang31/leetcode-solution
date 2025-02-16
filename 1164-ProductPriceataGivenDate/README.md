# **Product Price at a Given Date**

## **Problem Statement**
This query retrieves the latest product prices as of a given date (2019-08-16). If a product has no recorded price changes before or on that date, it defaults to a price of 10.  

  
**Example Input:**
  ```
  Input: 
  Products table:
  +------------+-----------+-------------+
  | product_id | new_price | change_date |
  +------------+-----------+-------------+
  | 1          | 20        | 2019-08-14  |
  | 2          | 50        | 2019-08-14  |
  | 1          | 30        | 2019-08-15  |
  | 1          | 35        | 2019-08-16  |
  | 2          | 65        | 2019-08-17  |
  | 3          | 20        | 2019-08-18  |
  +------------+-----------+-------------+
  Output: 
  +------------+-------+
  | product_id | price |
  +------------+-------+
  | 2          | 50    |
  | 1          | 35    |
  | 3          | 10    |
  +------------+-------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Use LAG() window function:
   - Retrieves values from one and two rows before the current row.
2. Filter rows where num appears in three consecutive entries:
   - Ensure num = prev1 = prev2.
3. Use DISTINCT to return unique numbers.
   
- Language: Oracle SQL
- Code:
  ```
  WITH LatestChange AS (
      SELECT product_id, MAX(change_date) AS latest_date
      FROM Products
      WHERE change_date <= TO_DATE('2019-08-16', 'YYYY-MM-DD')
      GROUP BY product_id
  )
  SELECT 
      p.product_id, 
      COALESCE(o.new_price, 10) AS price
  FROM LatestChange p
  LEFT JOIN Products o
  ON p.product_id = o.product_id AND p.latest_date = o.change_date
  UNION
  SELECT product_id, 10 AS price
  FROM Products
  WHERE product_id NOT IN (SELECT product_id FROM LatestChange);
  ```
  
---

## **Use Cases**
1. Retail Price Management: Determine the latest product prices in a store.
2. Historical Pricing Analysis: Track price changes over time for business insights.
3. Data Cleansing & Validation: Ensure that products without recent updates have a default price.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
