# **Patients With a Condition**

## **Problem Statement**
This query retrieves patients who have a condition that starts with DIAB1 in the conditions column of the Patients table.  
  
**Example Input:**
  ```
  Input: 
  Patients table:
  +------------+--------------+--------------+
  | patient_id | patient_name | conditions   |
  +------------+--------------+--------------+
  | 1          | Daniel       | YFEV COUGH   |
  | 2          | Alice        |              |
  | 3          | Bob          | DIAB100 MYOP |
  | 4          | George       | ACNE DIAB100 |
  | 5          | Alain        | DIAB201      |
  +------------+--------------+--------------+
  Output: 
  +------------+--------------+--------------+
  | patient_id | patient_name | conditions   |
  +------------+--------------+--------------+
  | 3          | Bob          | DIAB100 MYOP |
  | 4          | George       | ACNE DIAB100 | 
  +------------+--------------+--------------+
  ```
---

## **Solutions Overview**
### **String Function Approach (Oracle SQL)**
1. Identify Relevant Conditions: The query needs to filter rows where the conditions column contains a condition that starts with DIAB1.
2. Use the LIKE Operator: Since DIAB1 may appear at the beginning or after another condition, use LIKE with both leading (DIAB1%) and embedded (% DIAB1%) conditions.
3. Retrieve Matching Rows: Select all columns from Patients where the conditions column matches either pattern.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT *
  FROM Patients 
  WHERE conditions LIKE '% DIAB1%' OR conditions LIKE 'DIAB1%';
  ```
  
---

## **Use Cases**
1. Medical Record Filtering: Helps filter patients with specific conditions for targeted treatments.
2. Health Analytics: Useful in analyzing patient distributions with diabetic conditions.
3. Insurance Claims Processing: Identifies specific patients for insurance eligibility based on medical conditions.

### **Future Plans**
- Implement solutions for other SQL dialects like MySQL and PostgreSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
