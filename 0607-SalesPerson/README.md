# **Sales Person**

## **Problem Statement**
This query retrieves salespersons who have not made any sales to the company named 'RED'.

**Example Input:**
  ```
  Input: 
  SalesPerson table:
  +----------+------+--------+-----------------+------------+
  | sales_id | name | salary | commission_rate | hire_date  |
  +----------+------+--------+-----------------+------------+
  | 1        | John | 100000 | 6               | 4/1/2006   |
  | 2        | Amy  | 12000  | 5               | 5/1/2010   |
  | 3        | Mark | 65000  | 12              | 12/25/2008 |
  | 4        | Pam  | 25000  | 25              | 1/1/2005   |
  | 5        | Alex | 5000   | 10              | 2/3/2007   |
  +----------+------+--------+-----------------+------------+
  Company table:
  +--------+--------+----------+
  | com_id | name   | city     |
  +--------+--------+----------+
  | 1      | RED    | Boston   |
  | 2      | ORANGE | New York |
  | 3      | YELLOW | Boston   |
  | 4      | GREEN  | Austin   |
  +--------+--------+----------+
  Orders table:
  +----------+------------+--------+----------+--------+
  | order_id | order_date | com_id | sales_id | amount |
  +----------+------------+--------+----------+--------+
  | 1        | 1/1/2014   | 3      | 4        | 10000  |
  | 2        | 2/1/2014   | 4      | 5        | 5000   |
  | 3        | 3/1/2014   | 1      | 1        | 50000  |
  | 4        | 4/1/2014   | 1      | 4        | 25000  |
  +----------+------------+--------+----------+--------+
  
  Output: 
  +------+
  | name |
  +------+
  | Amy  |
  | Mark |
  | Alex |
  +------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Select all sales_id values that have made sales to company RED by joining Orders and Company tables.
2. Exclude these sales_id values from the SalesPerson table.
3. Retrieve the names of salespersons who do not appear in the filtered sales_id list.

- Language: Oracle SQL
- Code:
  ```
  SELECT name
  FROM SalesPerson
  WHERE sales_id not in (
      SELECT O.sales_id
      FROM Orders O
      JOIN Company C
      ON O.com_id = C.com_id 
      WHERE C.name = 'RED'
  );
  ```
  
---

## **Use Cases**
1. Sales Analysis: Identify salespersons who have not engaged with key clients.
2. Business Strategy: Focus on untapped sales potential for specific customers.
3. Sales Performance Evaluation: Track engagement with high-value clients.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
