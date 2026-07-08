# Write your MySQL query statement below
SELECT * 
FROM products
WHERE REGEXP_LIKE(description,'(?<= |^)SN[0-9]{4}-[0-9]{4}(?= |$)' , 'c')
ORDER BY product_id