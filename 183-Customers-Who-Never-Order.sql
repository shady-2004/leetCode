# Write your MySQL query statement below
SELECT name AS Customers from Customers c
LEFT JOIN Orders o ON c.id = o.customerId
WHERE o.id IS NULL