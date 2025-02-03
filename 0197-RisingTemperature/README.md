# **Rising Temperature**

## **Problem Statement**
This query retrieves the IDs of records where the temperature was higher than the previous day. The goal is to find all dates where the recorded temperature increased compared to the prior day.  

**Example Input:**
  ```
  Weather table:
  +----+------------+-------------+
  | id | recordDate | temperature |
  +----+------------+-------------+
  | 1  | 2015-01-01 | 10          |
  | 2  | 2015-01-02 | 25          |
  | 3  | 2015-01-03 | 20          |
  | 4  | 2015-01-04 | 30          |
  +----+------------+-------------+

  Example Output:
  +----+
  | id |
  +----+
  | 2  |
  | 4  |
  +----+
  ```
  
- Explanation:
  1. On 2015-01-02, the temperature increased from 10 to 25 compared to 2015-01-01.
  2. On 2015-01-04, the temperature increased from 20 to 30 compared to 2015-01-03.
  3. Other dates do not satisfy the condition.
---

## **Solutions Overview**
### **INNER JOIN & DATEDIFF Approach (MySQL)**
1. Use INNER JOIN to compare each day's temperature with the previous day's.
2. Match rows where the date difference is exactly 1 using DATEDIFF().
3. Filter records where the temperature is greater than the previous day.
   
- Language: MySQL
- Code:
  ```
  SELECT today.id
  FROM Weather today
  INNER JOIN Weather yest
  WHERE DATEDIFF(today.recordDate,yest.recordDate)=1
  AND today.temperature > yest.temperature;
  ```
  
---

## **Use Cases**
1. Climate Analysis: Identify warming trends and fluctuations in temperature.
2. Environmental Monitoring: Detect unusual temperature spikes over time.
3. Agricultural Insights: Understand how temperature changes impact crop growth and harvest periods.  

### **Future Plans**
- Add implementations in other languages, such as Oracle SQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
