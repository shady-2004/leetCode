# Write your MySQL query statement below
SELECT e.employee_id , e.name  ,COUNT(r.reports_to) AS reports_count , ROUND(AVG(r.age)) AS average_age 
FROM Employees e
JOIN Employees r on e.employee_id = r.reports_to
GROUP BY e.employee_id 
ORDER BY e.employee_id 