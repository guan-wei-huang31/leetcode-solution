# **Product Sales Analysis III**

## **Problem Statement**
This query retrieves the first recorded sales year for each product along with the corresponding quantity and price. The goal is to identify the earliest sale of each product.  
  
Formula Used:  
First-Year Sales = min(extyear for each product_id


**Example Input:**
  ```
  Input: 
  Sales table:
  +---------+------------+------+----------+-------+
  | sale_id | product_id | year | quantity | price |
  +---------+------------+------+----------+-------+ 
  | 1       | 100        | 2008 | 10       | 5000  |
  | 2       | 100        | 2009 | 12       | 5000  |
  | 7       | 200        | 2011 | 15       | 9000  |
  +---------+------------+------+----------+-------+
  Product table:
  +------------+--------------+
  | product_id | product_name |
  +------------+--------------+
  | 100        | Nokia        |
  | 200        | Apple        |
  | 300        | Samsung      |
  +------------+--------------+
  
  Output: 
  +------------+------------+----------+-------+
  | product_id | first_year | quantity | price |
  +------------+------------+----------+-------+ 
  | 100        | 2008       | 10       | 5000  |
  | 200        | 2011       | 15       | 9000  |
  +------------+------------+----------+-------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Find the earliest recorded sale per product:
   - Use MIN(year) to identify the first recorded year for each product.
2. Retrieve associated details (quantity, price):
   - Use a correlated subquery to match the minimum year per product_id.

- Language: Oracle SQL
- Code:
  ```
  SELECT S.product_id, 
         S.year AS first_year, 
         S.quantity, 
         S.price
  FROM Sales S
  WHERE S.year = (
      SELECT MIN(year) 
      FROM Sales 
      WHERE product_id = S.product_id
  );
  ```
  
---

## **Use Cases**
1. Product Lifecycle Analysis: Identify when each product was first sold.
2. Market Entry Evaluation: Understand initial sales trends for various products.
3. Revenue Forecasting: Establish historical sales benchmarks for forecasting.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
