# **Customer Who Visited but Did Not Make Any Transactions**

## **Problem Statement**
This query retrieves a list of customers who visited the mall but did not make any transactions. The goal is to identify the number of visits per customer where no purchases were recorded.  

**Example Input:**
  ```
  Visits
  +----------+-------------+
  | visit_id | customer_id |
  +----------+-------------+
  | 1        | 23          |
  | 2        | 9           |
  | 4        | 30          |
  | 5        | 54          |
  | 6        | 96          |
  | 7        | 54          |
  | 8        | 54          |
  +----------+-------------+
  Transactions
  +----------------+----------+--------+
  | transaction_id | visit_id | amount |
  +----------------+----------+--------+
  | 2              | 5        | 310    |
  | 3              | 5        | 300    |
  | 9              | 5        | 200    |
  | 12             | 1        | 910    |
  | 13             | 2        | 970    |
  +----------------+----------+--------+
  
  output
  +-------------+----------------+
  | customer_id | count_no_trans |
  +-------------+----------------+
  | 54          | 2              |
  | 30          | 1              |
  | 96          | 1              |
  +-------------+----------------+
  ```
  
- Explanation:
  1. Customer 23 made a transaction during their visit (visit_id = 1), so they are not included.
  2. Customer 9 made a transaction during their visit (visit_id = 2), so they are not included.
  3. Customer 30 visited once (visit_id = 4) but did not make a transaction.
  4. Customer 54 visited three times (visit_ids: 5, 7, 8). They made transactions in visit 5 but not in visits 7 and 8.
  5. Customer 96 visited once (visit_id = 6) but did not make a transaction.
  6. The result counts the visits without transactions per customer.
---

## **Solutions Overview**
### **LEFT JOIN Approach (MySQL)**
1. Perform a LEFT JOIN between the Visits and Transactions tables on visit_id.
2. Filter out rows where transaction_id is NULL, meaning no transaction was made.
3. Count the number of such visits per customer_id.
4. Group by customer_id to return aggregated counts.
   
- Language: MySQL
- Code:
  ```
  SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans
  FROM Visits v
  LEFT JOIN Transactions t
  ON v.visit_id = t.visit_id
  WHERE t.transaction_id IS NULL
  GROUP BY v.customer_id;
  ```
  
---

## **Use Cases**
1. Customer Insights: Identify customers who visit frequently but do not make purchases.
2. Marketing Strategy: Develop targeted promotions or loyalty programs for such customers.
3. Sales Analysis: Understand shopping behavior and optimize in-store engagement strategies.

### **Future Plans**
- Add implementations in other languages, such as Oracle SQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
