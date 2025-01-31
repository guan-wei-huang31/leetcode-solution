# **Recyclable and Low Fat Products**

## **Problem Statement**
This query is used to filter a list of products and find those that meet specific criteria. Specifically, it identifies products that are both low fat and recyclable.  

**Example Input:**
  ```
  Products Table
  +------------+----------+------------+
  | product_id | low_fats | recyclable |
  +------------+----------+------------+
  | 0          | Y        | N          |
  | 1          | Y        | Y          |
  | 2          | N        | Y          |
  | 3          | Y        | Y          |
  | 4          | N        | N          |
  +------------+----------+------------+

  Example Output:
  +------------+
  | product_id |
  +------------+
  | 1          |
  | 3          |
  +------------+
  ```
---

## **Solutions Overview**
### **Single-Pass Approach (Oracle SQL)**
1. Filter Rows:  
   - Use the WHERE clause to specify conditions:
     - low_fats = 'Y': Selects products labeled as low fat. 
	 - recyclable = 'Y': Selects products marked as recyclable.
2. Select Relevant Columns:
   - Use SELECT product_id to retrieve only the product_id of the filtered rows. 
   
- Language: Oracle SQL
- Code:
  ```
  SELECT product_id
  FROM Products
  WHERE low_fats = 'Y' AND recyclable = 'Y';
  ```
  
---

## **Use Cases**
1. Product Filtering: Quickly identify environmentally friendly and health-conscious products.
2. Inventory Management: Aid decision-making by categorizing products based on their attributes.
3. Analytics and Reporting: Generate insights about the distribution of product features.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
