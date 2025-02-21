# **Customers Who Never Order**

## **Problem Statement**
This query retrieves customers who have not placed any orders.

**Example Input:**
  ```
  Input: 
  Customers table:
  +----+-------+
  | id | name  |
  +----+-------+
  | 1  | Joe   |
  | 2  | Henry |
  | 3  | Sam   |
  | 4  | Max   |
  +----+-------+
  Orders table:
  +----+------------+
  | id | customerId |
  +----+------------+
  | 1  | 3          |
  | 2  | 1          |
  +----+------------+
  Output: 
  +-----------+
  | Customers |
  +-----------+
  | Henry     |
  | Max       |
  +-----------+
  ```
---

## **Solutions Overview**
### **JOIN Approach (Oracle SQL)**
1. Perform a LEFT JOIN between Customers and Orders tables.
2. Retain all records from Customers, even if they have no matching Orders.
3. Filter out customers where O.id IS NULL, indicating no orders placed.

- Language: Oracle SQL
- Code:
  ```
  SELECT C.name AS Customers
  FROM Customers C
  LEFT JOIN Orders O
  ON C.id = O.customerId
  WHERE O.id IS NULL;
  ```
  
---

## **Use Cases**
1. Customer Relationship Management: Identify customers who have not yet made a purchase.
2. Marketing Campaigns: Target inactive customers with promotional offers.
3. Sales Analysis: Track customer engagement and purchase activity.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
