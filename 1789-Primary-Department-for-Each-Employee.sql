# Write your MySQL query statement below
SELECT e.employee_id , e.department_id 
FROM Employee e
JOIN (SELECT employee_id , COUNT(department_id) AS cnt
        FROM Employee 
        GROUP BY employee_id
    )as t ON e.employee_id = t.employee_id
WHERE e.primary_flag ='Y' OR t.cnt = 1

