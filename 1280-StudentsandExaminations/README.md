# **Students and Examinations**

## **Problem Statement**
This query generates a report of students and the number of times they attended exams for each subject. The goal is to ensure that every student is listed for every subject, even if they did not attend any exams.  

**Example Input:**
  ```
  Students table:
  +------------+--------------+
  | student_id | student_name |
  +------------+--------------+
  | 1          | Alice        |
  | 2          | Bob          |
  | 13         | John         |
  | 6          | Alex         |
  +------------+--------------+
  Subjects table:
  +--------------+
  | subject_name |
  +--------------+
  | Math         |
  | Physics      |
  | Programming  |
  +--------------+
  Examinations table:
  +------------+--------------+
  | student_id | subject_name |
  +------------+--------------+
  | 1          | Math         |
  | 1          | Physics      |
  | 1          | Programming  |
  | 2          | Programming  |
  | 1          | Physics      |
  | 1          | Math         |
  | 13         | Math         |
  | 13         | Programming  |
  | 13         | Physics      |
  | 2          | Math         |
  | 1          | Math         |
  +------------+--------------+

  Example Output:
  +------------+--------------+--------------+----------------+
  | student_id | student_name | subject_name | attended_exams |
  +------------+--------------+--------------+----------------+
  | 1          | Alice        | Math         | 3              |
  | 1          | Alice        | Physics      | 2              |
  | 1          | Alice        | Programming  | 1              |
  | 2          | Bob          | Math         | 1              |
  | 2          | Bob          | Physics      | 0              |
  | 2          | Bob          | Programming  | 1              |
  | 6          | Alex         | Math         | 0              |
  | 6          | Alex         | Physics      | 0              |
  | 6          | Alex         | Programming  | 0              |
  | 13         | John         | Math         | 1              |
  | 13         | John         | Physics      | 1              |
  | 13         | John         | Programming  | 1              |
  +------------+--------------+--------------+----------------+
  ```
  
---

## **Solutions Overview**
### **CROSS JOIN with LEFT JOIN Approach (Oracle SQL)**
1. Generate all possible student-subject combinations using CROSS JOIN.
2. LEFT JOIN with the Examinations table to count the number of times each student attended an exam for a subject.
3. Use COUNT(e.student_id) to get the attendance count while ensuring that students who did not take an exam appear with 0.
4. Sort results by student ID, student name, and subject name for better readability.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT stu.student_id, stu.student_name, sub.subject_name, COUNT(e.student_id)AS attended_exams
  FROM Students stu
  CROSS JOIN Subjects sub
  LEFT JOIN Examinations e
  ON stu.student_id = e.student_id
  AND sub.subject_name = e.subject_name
  GROUP BY stu.student_id, stu.student_name, sub.subject_name
  ORDER BY stu.student_id, stu.student_name, sub.subject_name;
  ```
  
---

## **Use Cases**
1. Student Performance Tracking: Ensure that all students are accounted for in each subject.
2. Attendance Monitoring: Identify students who have never attended a particular subject's exam.
3. Academic Reporting: Provide detailed exam attendance reports for educational institutions. 

### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
