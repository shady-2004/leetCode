# Write your MySQL query statement below
SELECT customer_id  
FROM (SELECT DISTINCT  * FROM Customer ) AS c
GROUP BY customer_id
HAVING COUNT(c.product_key) = (SELECT COUNT(*) FROM Product )
