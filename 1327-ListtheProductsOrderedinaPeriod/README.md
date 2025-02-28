# **List the Products Ordered in a Period**

## **Problem Statement**
This query retrieves the total number of units ordered for each product within a specified month and year. It filters the results to display only those products with total units ordered greater than or equal to 100.  

**Example Input:**
  ```
  Input: 
  Products table:
  +-------------+-----------------------+------------------+
  | product_id  | product_name          | product_category |
  +-------------+-----------------------+------------------+
  | 1           | Leetcode Solutions    | Book             |
  | 2           | Jewels of Stringology | Book             |
  | 3           | HP                    | Laptop           |
  | 4           | Lenovo                | Laptop           |
  | 5           | Leetcode Kit          | T-shirt          |
  +-------------+-----------------------+------------------+
  Orders table:
  +--------------+--------------+----------+
  | product_id   | order_date   | unit     |
  +--------------+--------------+----------+
  | 1            | 2020-02-05   | 60       |
  | 1            | 2020-02-10   | 70       |
  | 2            | 2020-01-18   | 30       |
  | 2            | 2020-02-11   | 80       |
  | 3            | 2020-02-17   | 2        |
  | 3            | 2020-02-24   | 3        |
  | 4            | 2020-03-01   | 20       |
  | 4            | 2020-03-04   | 30       |
  | 4            | 2020-03-04   | 60       |
  | 5            | 2020-02-25   | 50       |
  | 5            | 2020-02-27   | 50       |
  | 5            | 2020-03-01   | 50       |
  +--------------+--------------+----------+
  Output: 
  +--------------------+---------+
  | product_name       | unit    |
  +--------------------+---------+
  | Leetcode Solutions | 130     |
  | Leetcode Kit       | 100     |
  +--------------------+---------+
  ```
---

## **Solutions Overview**
### **JOIN and Aggregation Approach (Oracle SQL)**
1. Join the Products and Orders tables:
   - Match product records with their corresponding order records.
2. Filter by a specific month and year:
   - Use TO_CHAR(order_date, 'MM-YYYY') to ensure orders from the desired period are selected.
3. Group by product name:
   - Aggregate the total number of units per product.
4. Filter results with a threshold:
   - Use HAVING to only include products where total units ordered is at least 100.

- Language: Oracle SQL
- Code:
  ```
  SELECT p.product_name, SUM(o.unit) AS unit
  FROM Products p
  INNER JOIN Orders o
  ON p.product_id = o.product_id
  WHERE to_char(o.order_date, 'MM-YYYY') = '02-2020'
  GROUP BY p.product_name
  HAVING SUM(o.unit) >= 100;
  ```
  
---

## **Use Cases**
1. Sales Analytics: Identify top-selling products during a given period.
2. Inventory Management: Monitor product demand to optimize stock levels.
3. Marketing Insights: Track popular products to design targeted promotions.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
