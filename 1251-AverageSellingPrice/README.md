# **Average Selling Price**

## **Problem Statement**
This query calculates the average selling price for each product by weighting the price based on the number of units sold within the applicable date range.
Formula:
Average Selling Price = ( &#8721;(price × units)) / ( &#8721;units)

If no units are sold for a product, the result defaults to 0.  

**Example Input:**
  ```
  Prices table:
  +------------+------------+------------+--------+
  | product_id | start_date | end_date   | price  |
  +------------+------------+------------+--------+
  | 1          | 2019-02-17 | 2019-02-28 | 5      |
  | 1          | 2019-03-01 | 2019-03-22 | 20     |
  | 2          | 2019-02-01 | 2019-02-20 | 15     |
  | 2          | 2019-02-21 | 2019-03-31 | 30     |
  +------------+------------+------------+--------+
  UnitsSold table:
  +------------+---------------+-------+
  | product_id | purchase_date | units |
  +------------+---------------+-------+
  | 1          | 2019-02-25    | 100   |
  | 1          | 2019-03-01    | 15    |
  | 2          | 2019-02-10    | 200   |
  | 2          | 2019-03-22    | 30    |
  +------------+---------------+-------+

  Example Output:
  +------------+---------------+
  | product_id | average_price |
  +------------+---------------+
  | 1          | 6.96          |
  | 2          | 16.96         |
  +------------+---------------+
  ```

---

## **Solutions Overview**
### **Left Join Approach (Oracle SQL)**
1. JOIN Prices with UnitsSold:
   - Match product_id in both tables.
   - Ensure purchase_date falls within start_date and end_date.
2. Calculate Weighted Average Price:
   - Use SUM(price * units) / SUM(units) to determine the weighted average.
   - Use ROUND(...,2) to format results to two decimal places.
   - Use NVL() (Oracle) or IFNULL() (MySQL/PostgreSQL) to handle cases where no sales were recorded.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT p.product_id, 
         NVL(ROUND(SUM(p.price * u.units) / SUM(u.units), 2), 0) AS average_price
  FROM Prices p
  LEFT JOIN UnitsSold u
  ON p.product_id = u.product_id
  AND u.purchase_date BETWEEN p.start_date AND p.end_date
  GROUP BY p.product_id;
  ```
  
---

## **Use Cases**
1. Revenue Analysis: Determine the actual selling price across different time periods.
2. Demand Forecasting: Identify price sensitivity based on demand fluctuations.
3. Pricing Strategy: Adjust pricing models based on historical purchase trends.  
### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
