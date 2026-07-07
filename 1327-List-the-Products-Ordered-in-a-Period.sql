# Write your MySQL query statement below
SELECT p.product_name , SUM(u.unit) AS unit
FROM Products p
JOIN Orders u ON p.product_id = u.product_id
WHERE YEAR(u.order_date) = 2020 AND MONTH(u.order_date) = 2
GROUP BY p.product_id 
HAVING unit >= 100