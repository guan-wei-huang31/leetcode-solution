# **Average Time of Process per Machine**

## **Problem Statement**
This query calculates the average processing time for each machine by determining the difference between the start and end timestamps for each process and then averaging them for each machine.  
Formula:  
Processing Time = ( &#8721;(end timestamp - start timestamp)) / (total processes)  
  
  
**Example Input:**
  ```
  Activity table:
  +------------+------------+---------------+-----------+
  | machine_id | process_id | activity_type | timestamp |
  +------------+------------+---------------+-----------+
  | 0          | 0          | start         | 0.712     |
  | 0          | 0          | end           | 1.520     |
  | 0          | 1          | start         | 3.140     |
  | 0          | 1          | end           | 4.120     |
  | 1          | 0          | start         | 0.550     |
  | 1          | 0          | end           | 1.550     |
  | 1          | 1          | start         | 0.430     |
  | 1          | 1          | end           | 1.420     |
  | 2          | 0          | start         | 4.100     |
  | 2          | 0          | end           | 4.512     |
  | 2          | 1          | start         | 2.500     |
  | 2          | 1          | end           | 5.000     |
  +------------+------------+---------------+-----------+

  Example Output:
  +------------+-----------------+
  | machine_id | processing_time |
  +------------+-----------------+
  | 0          | 0.894           |
  | 1          | 0.995           |
  | 2          | 1.456           |
  +------------+-----------------+
  ```
  
---

## **Solutions Overview**
### **Join Approach (Oracle SQL)**
1. Join start and end activity records:
   - Match records with the same machine_id and process_id.
   - Ensure start corresponds to end using activity_type.
2. Calculate processing time:
   - Use AVG(end timestamp - start timestamp) per machine_id.
   - Use ROUND(...,3) to ensure precision to three decimal places.  

- Language: Oracle SQL
- Code:
  ```
  SELECT s.machine_id, ROUND(AVG(e.timestamp - s.timestamp),3) AS processing_time
  FROM Activity s
  JOIN Activity e
  ON s.machine_id = e.machine_id AND s.process_id = e.process_id
  WHERE s.activity_type = 'start' AND e.activity_type = 'end'
  GROUP BY s.machine_id;
  ```
  
---

## **Use Cases**
1. Manufacturing Process Monitoring: Evaluate machine efficiency by tracking processing time.
2. System Performance Analysis: Identify bottlenecks by analyzing process execution times.
3. Data Engineering: Optimize timestamp-based event tracking for real-time monitoring.

### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
