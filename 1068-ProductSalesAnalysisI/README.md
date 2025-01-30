# **Product Sales Analysis I**

## **Problem Statement**
This query retrieves a list of products along with their corresponding sales year and price. The goal is to ensure all sales records are included, even if they do not have a matching product in the Product table.  

**Example Input:**
  ```
  Sales Table:
  +---------+------------+------+----------+-------+
  | sale_id | product_id | year | quantity | price |
  +---------+------------+------+----------+-------+ 
  | 1       | 100        | 2008 | 10       | 5000  |
  | 2       | 100        | 2009 | 12       | 5000  |
  | 7       | 200        | 2011 | 15       | 9000  |
  +---------+------------+------+----------+-------+
  
  Product Table:
  +------------+--------------+
  | product_id | product_name |
  +------------+--------------+
  | 100        | Nokia        |
  | 200        | Apple        |
  | 300        | Samsung      |
  +------------+--------------+

  Example Output:
  +--------------+-------+-------+
  | product_name | year  | price |
  +--------------+-------+-------+
  | Nokia        | 2008  | 5000  |
  | Nokia        | 2009  | 5000  |
  | Apple        | 2011  | 9000  |
  +--------------+-------+-------+
  ```
  
- Explanation:
  1. From sale_id = 1, we can conclude that Nokia was sold for 5000 in the year 2008.
  2. From sale_id = 2, we can conclude that Nokia was sold for 5000 in the year 2009.
  3. From sale_id = 7, we can conclude that Apple was sold for 9000 in the year 2011.
---

## **Solutions Overview**
### **LEFT JOIN Approach (MySQL)**
1. Use LEFT JOIN to include all sales records:
   - Ensures that all sales from the Sales table appear in the result, even if they do not have a corresponding entry in Product.
2. Match records based on product ID:
   - Join Product on product_id to retrieve the corresponding product_name.
3. Display NULL if no product name exists:
   - If there is no matching product_name, the result will show NULL.
   
- Language: MySQL
- Code:
  ```
  SELECT p.Product_name, s.year, s.price
  FROM Sales s
  LEFT JOIN Product p
  ON s.product_id = p.product_id;
  ```
  
---

## **Use Cases**
1. Sales Reporting: Generate reports that display product sales data by year and price.
2. Product Performance Analysis: Identify trends in product sales based on pricing and yearly sales records.
3. Data Consistency Checks: Ensure that all products in the sales table have corresponding product details. 

### **Future Plans**
- Add implementations in other languages, such as Oracle SQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
