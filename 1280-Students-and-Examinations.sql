# Write your MySQL query statement below
SELECT s.student_id , s.student_name , ss.subject_name , COUNT(E.subject_name) AS attended_exams
FROM Students s 
CROSS JOIN Subjects ss 
LEFT JOIN Examinations AS E
ON s.student_id = E.student_id AND ss.subject_name = E.subject_name
GROUP BY s.student_id , ss.subject_name
ORDER BY student_id , subject_name
