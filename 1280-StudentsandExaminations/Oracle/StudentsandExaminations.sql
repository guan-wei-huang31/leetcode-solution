SELECT stu.student_id, stu.student_name, sub.subject_name, COUNT(e.student_id)AS attended_exams
FROM Students stu
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
ON stu.student_id = e.student_id
AND sub.subject_name = e.subject_name
GROUP BY stu.student_id, stu.student_name, sub.subject_name
ORDER BY stu.student_id, stu.student_name, sub.subject_name;