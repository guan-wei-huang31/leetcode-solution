# **Monthly Transactions I**

## **Problem Statement**
This query aggregates transaction data to generate a summary that includes the transaction count, approved transaction count, and total transaction amounts grouped by month and country.  
  
  
**Example Input:**
  ```
  Input: 
  Transactions table:
  +------+---------+----------+--------+------------+
  | id   | country | state    | amount | trans_date |
  +------+---------+----------+--------+------------+
  | 121  | US      | approved | 1000   | 2018-12-18 |
  | 122  | US      | declined | 2000   | 2018-12-19 |
  | 123  | US      | approved | 2000   | 2019-01-01 |
  | 124  | DE      | approved | 2000   | 2019-01-07 |
  +------+---------+----------+--------+------------+
  Output: 
  +----------+---------+-------------+----------------+--------------------+-----------------------+
  | month    | country | trans_count | approved_count | trans_total_amount | approved_total_amount |
  +----------+---------+-------------+----------------+--------------------+-----------------------+
  | 2018-12  | US      | 2           | 1              | 3000               | 1000                  |
  | 2019-01  | US      | 1           | 1              | 2000               | 2000                  |
  | 2019-01  | DE      | 1           | 1              | 2000               | 2000                  |
  +----------+---------+-------------+----------------+--------------------+-----------------------+
  ```
---

## **Solutions Overview**
### **Aggregation Approach (Oracle SQL)**
1. Extract Month-Year from trans_date:
   - TO_CHAR(trans_date, 'YYYY-MM') AS month
2. Group transactions by month and country.
3. Calculate transaction statistics:
   - Total number of transactions (COUNT(*))
   - Approved transaction count using SUM(CASE WHEN state = 'approved' THEN 1 ELSE 0 END)
   - Total transaction amount using SUM(amount)
   - Approved transaction amount using SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END)
   
- Language: Oracle SQL
- Code:
  ```
  SELECT TO_CHAR(trans_date, 'YYYY-MM') AS month,
         country, COUNT(*) AS trans_count, 
         SUM(CASE WHEN state = 'approved' THEN 1 ELSE 0 END) AS approved_count,
         SUM(amount) AS trans_total_amount,
         SUM(CASE WHEN state = 'approved' THEN amount  ELSE 0 END) AS approved_total_amount
  FROM Transactions
  GROUP BY TO_CHAR(trans_date, 'YYYY-MM'), country;
  ```
  
---

## **Use Cases**
1. Financial Reporting: Track monthly transaction performance.
2. Approval Rate Analysis: Identify trends in approved vs. declined transactions.
3. Revenue Monitoring: Assess total and approved transaction revenue per country.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
