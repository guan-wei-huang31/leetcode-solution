# **Exchange Seats**

## **Problem Statement**
This query rearranges student seat assignments by swapping adjacent seat numbers. If the total number of seats is odd, the last seat remains unchanged.

- Formula Used:
  - Swap even and odd seat numbers:
    - If id is even, swap with the previous seat (id-1).
	- If id is odd and not the last row, swap with the next seat (id+1).
	- If id is odd and the last seat, it remains unchanged.   
	
**Example Input:**
  ```
  Seat table:
  +----+---------+
  | id | student |
  +----+---------+
  | 1  | Abbot   |
  | 2  | Doris   |
  | 3  | Emerson |
  | 4  | Green   |
  | 5  | Jeames  |
  +----+---------+
  Output: 
  +----+---------+
  | id | student |
  +----+---------+
  | 1  | Doris   |
  | 2  | Abbot   |
  | 3  | Green   |
  | 4  | Emerson |
  | 5  | Jeames  |
  +----+---------+
  ```
---

## **Solutions Overview**
### **Subquery Approach (Oracle SQL)**
1. Handle seat swapping logic:
   - Use MOD(id,2) to determine even/odd seat numbers.
   - If id is even, assign id-1.
   - If id is odd and not the last seat, assign id+1.
   - If id is odd and last seat, keep it unchanged.
2. Order the result by the new id value.

- Language: Oracle SQL
- Code:
  ```
  SELECT (CASE 
              WHEN MOD(id,2) <> 0 AND id = (SELECT COUNT(*) FROM Seat) THEN id
              WHEN MOD(id,2) = 0 THEN id-1
              ELSE id + 1
              END
          ) AS id, student
  FROM Seat
  ORDER BY id;
  ```
  
---

## **Use Cases**
1. Classroom Arrangement: Reassign seats for better interaction.
2. Event Seating Management: Optimize seating for groups.
3. Data Transformation: Useful for seat-based processing or display. 

### **Future Plans**
- Add implementations in other languages, such as MYSQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
