# Write your MySQL query statement below
(
SELECT e.employee_id  
FROM Employees e 
LEFT JOIN Salaries s on e.employee_id = s.employee_id
WHERE s.Salary IS NULL 

UNION ALL 

SELECT s.employee_id  
FROM Salaries s 
LEFT JOIN Employees e on e.employee_id = s.employee_id
WHERE e.name IS NULL )
ORDER BY employee_id