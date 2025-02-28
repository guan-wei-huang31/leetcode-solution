# **Reformat Department Table**

## **Problem Statement**
This query retrieves the monthly revenue breakdown per department, displaying revenue earned for each month in a pivoted format.

**Example Input:**
  ```
  Input: 
  Department table:
  +------+---------+-------+
  | id   | revenue | month |
  +------+---------+-------+
  | 1    | 8000    | Jan   |
  | 2    | 9000    | Jan   |
  | 3    | 10000   | Feb   |
  | 1    | 7000    | Feb   |
  | 1    | 6000    | Mar   |
  +------+---------+-------+
  Output: 
  +------+-------------+-------------+-------------+-----+-------------+
  | id   | Jan_Revenue | Feb_Revenue | Mar_Revenue | ... | Dec_Revenue |
  +------+-------------+-------------+-------------+-----+-------------+
  | 1    | 8000        | 7000        | 6000        | ... | null        |
  | 2    | 9000        | null        | null        | ... | null        |
  | 3    | null        | 10000       | null        | ... | null        |
  +------+-------------+-------------+-------------+-----+-------------+
  ```
---

## **Solutions Overview**
### **CASE Approach (Oracle SQL)**
1. Use SUM(CASE WHEN month = 'X' THEN revenue ELSE NULL END) for each month.
2. Group results by id to consolidate department revenue by month.
3. If a department has no revenue for a given month, return NULL.

- Language: Oracle SQL
- Code:
  ```
  SELECT 
      id,
      SUM(CASE WHEN month = 'Jan' THEN revenue ELSE NULL END) AS Jan_Revenue,
      SUM(CASE WHEN month = 'Feb' THEN revenue ELSE NULL END) AS Feb_Revenue,
      SUM(CASE WHEN month = 'Mar' THEN revenue ELSE NULL END) AS Mar_Revenue,
      SUM(CASE WHEN month = 'Apr' THEN revenue ELSE NULL END) AS Apr_Revenue,
      SUM(CASE WHEN month = 'May' THEN revenue ELSE NULL END) AS May_Revenue,
      SUM(CASE WHEN month = 'Jun' THEN revenue ELSE NULL END) AS Jun_Revenue,
      SUM(CASE WHEN month = 'Jul' THEN revenue ELSE NULL END) AS Jul_Revenue,
      SUM(CASE WHEN month = 'Aug' THEN revenue ELSE NULL END) AS Aug_Revenue,
      SUM(CASE WHEN month = 'Sep' THEN revenue ELSE NULL END) AS Sep_Revenue,
      SUM(CASE WHEN month = 'Oct' THEN revenue ELSE NULL END) AS Oct_Revenue,
      SUM(CASE WHEN month = 'Nov' THEN revenue ELSE NULL END) AS Nov_Revenue,
      SUM(CASE WHEN month = 'Dec' THEN revenue ELSE NULL END) AS Dec_Revenue
  FROM 
      Department
  group by
      id;
  ```
  
---

## **Use Cases**
1. Financial Reporting: Generate department-wise revenue reports by month.
2. Budget Planning: Analyze monthly revenue trends for better financial decision-making.
3. Performance Tracking: Compare revenue performance across different months.

### **Future Plans**
- Implement solutions for different SQL dialects (MySQL, PostgreSQL, etc.).  
- Expand query optimization for large datasets.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
