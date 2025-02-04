# **Customers Who Bought All Products**

## **Problem Statement**
This query identifies customers who have purchased every product available in the Product table. Only customers who have bought all products are included in the output.  
  
**Example Input:**
  ```
  Input: 
  Customer table:
  +-------------+-------------+
  | customer_id | product_key |
  +-------------+-------------+
  | 1           | 5           |
  | 2           | 6           |
  | 3           | 5           |
  | 3           | 6           |
  | 1           | 6           |
  +-------------+-------------+
  Product table:
  +-------------+
  | product_key |
  +-------------+
  | 5           |
  | 6           |
  +-------------+
  
  Output: 
  +-------------+
  | customer_id |
  +-------------+
  | 1           |
  | 3           |
  +-------------+
  ```
---

## **Solutions Overview**
### **Grouping Approach (Oracle SQL)**
1. Group by customer_id:
   - Aggregates purchases per customer.
2. Count distinct products per customer:
   - Use COUNT(DISTINCT product_key) to count the number of unique products each customer bought.
3. Compare with total available products:
   - Use a subquery (SELECT COUNT(*) FROM Product) to determine the total number of products.

- Language: Oracle SQL
- Code:
  ```
  SELECT customer_id
  FROM Customer
  GROUP BY customer_id
  HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(*) FROM Product);
  ```
  
---

## **Use Cases**
1. Customer Behavior Analysis: Identify loyal customers who have purchased every product.
2. Marketing Insights: Target customers who have completed purchases of all product offerings.
3. Sales Performance Evaluation: Determine how many customers fully explore a store’s inventory.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
