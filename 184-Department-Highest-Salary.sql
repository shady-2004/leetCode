# Write your MySQL query statement below
SELECT d.Department  , e.name as Employee , e.salary as Salary 
FROM Employee e
JOIN (SELECT dep.id, dep.name as Department , MAX(salary) MAX_sal
    FROM Department  dep
    JOIN  Employee ON Employee.departmentId = dep.id 
    GROUP BY dep.id    ) AS d ON d.id = e.departmentId
WHERE e.salary = d.MAX_SAL