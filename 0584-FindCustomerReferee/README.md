# **584. Find Customer Referee**

## **Problem Statement**
This query filters a list of customers to find those who either do not have a referee or whose referee is not equal to 2. The goal is to extract customers who meet these conditions.  

**Example Input:**
  ```
  Customer Table
  +----+------+------------+
  | id | name | referee_id |
  +----+------+------------+
  |  1 | Will | null       |
  |  2 | Jane | null       |
  |  3 | Alex | 2          |
  |  4 | Bill | null       |
  |  5 | Zack | 1          |
  |  6 | Mark | 2          |
  +----+------+------------+

  Example Output:
  +------+
  | name |
  +------+
  | Will |
  | Jane |
  | Bill |
  | Zack |
  +------+
  ```
---

## **Solutions Overview**
### **Filtering Approach (Oracel SQL)**
1. Exclude Customers Referred by ID 2:  
   - Use the WHERE clause to filter out customers where referee_id =2.  
2. Include Customers Without a Referee:
   - Customers with NULL referee values should be included in the result. 
   
- Language: Oracle SQL
- Code:
  ```
  SELECT name
  FROM Customer
  WHERE referee_id IS NULL OR referee_id <> 2;
  ```
  
---

## **Use Cases**
1. Customer Analysis: Identify customers who were not referred by a specific person.
2. Referral Programs: Assess the impact of certain referees on customer acquisition.
3. Database Management: Filter and clean customer records efficiently.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
