# **Triangle Judgement**

## **Problem Statement**
This query checks whether three given side lengths can form a valid triangle using the triangle inequality theorem, which states:
  - A triangle is valid if the sum of any two sides is greater than the third side.  
  
**Example Input:**
  ```
  Input: 
  Triangle table:
  +----+----+----+
  | x  | y  | z  |
  +----+----+----+
  | 13 | 15 | 30 |
  | 10 | 20 | 15 |
  +----+----+----+
  
  Output: 
  +----+----+----+----------+
  | x  | y  | z  | triangle |
  +----+----+----+----------+
  | 13 | 15 | 30 | No       |
  | 10 | 20 | 15 | Yes      |
  +----+----+----+----------+
  ```
---

## **Solutions Overview**
### **Case Approach (Oracle SQL)**
1. Use CASE statement:
   - Checks whether the three side lengths satisfy the triangle inequality theorem.
2. Return 'Yes' if valid, 'No' otherwise.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT x, y, z, 
      (CASE WHEN z < x + y AND x < z + y AND y < x + z 
      THEN 'Yes' ELSE 'No' END) AS triangle
  FROM Triangle;
  ```
  
---

## **Use Cases**
1. Geometric Validity Testing: Ensure the given sides form a valid triangle.
2. Data Validation: Identify incorrect or inconsistent geometric data.
3. Mathematical Computation: Assist in simulations requiring triangle formation.  

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
