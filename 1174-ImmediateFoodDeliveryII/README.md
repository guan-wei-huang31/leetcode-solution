# **Immediate Food Delivery II**

## **Problem Statement**
This query calculates the percentage of first orders that were delivered immediately (i.e., the order date matches the customer's preferred delivery date). The calculation considers only the first order placed by each customer.  
  
Formula Used:
Immediate Percentage = (Immediate First Orders / Total First Orders) × 100


**Example Input:**
  ```
  Input: 
  Delivery table:
  +-------------+-------------+------------+-----------------------------+
  | delivery_id | customer_id | order_date | customer_pref_delivery_date |
  +-------------+-------------+------------+-----------------------------+
  | 1           | 1           | 2019-08-01 | 2019-08-02                  |
  | 2           | 2           | 2019-08-02 | 2019-08-02                  |
  | 3           | 1           | 2019-08-11 | 2019-08-12                  |
  | 4           | 3           | 2019-08-24 | 2019-08-24                  |
  | 5           | 3           | 2019-08-21 | 2019-08-22                  |
  | 6           | 2           | 2019-08-11 | 2019-08-13                  |
  | 7           | 4           | 2019-08-09 | 2019-08-09                  |
  +-------------+-------------+------------+-----------------------------+
  Output: 
  +----------------------+
  | immediate_percentage |
  +----------------------+
  | 50.00                |
  +----------------------+
  ```
---

## **Solutions Overview**
### **Subquery with Aggregation Approach (Oracle SQL)**
1. Find the first order for each customer:
   - Use MIN(order_date) grouped by customer_id.
2. Check if the first order was delivered immediately:
   - Compare order_date with customer_pref_delivery_date.
   - Assign 1 if they match, otherwise 0.
3. Compute the percentage:
   - Use AVG() to calculate the proportion of immediate first orders.
   - Multiply by 100 and round to two decimal places.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT ROUND(AVG(
      CASE WHEN 
          order_date = customer_pref_delivery_date 
      THEN 1 
      ELSE 0 
      END )* 100,2) AS immediate_percentage 
  FROM Delivery
  WHERE (customer_id, order_date) in (
      SELECT customer_id, MIN(order_date) 
      FROM  Delivery
      GROUP BY customer_id
  );
  ```
  
---

## **Use Cases**
1. Customer Satisfaction Analysis: Measure how often first orders are delivered as requested.
2. Logistics Optimization: Identify potential delays in first-time deliveries.
3. Service Level Evaluation: Monitor fulfillment efficiency for new customers.

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
