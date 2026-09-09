# Write your MySQL query statement below
SELECT s.product_id , s.year as first_year ,quantity  , price 
FROM Sales s
JOIN (SELECT product_id , MIN(year) as year  FROM Sales GROUP BY product_id ) as ss
ON s.product_id = ss.product_id
WHERE s.year = ss.year