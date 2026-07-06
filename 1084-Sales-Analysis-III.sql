# Write your MySQL query statement below
SELECT Product.product_id , Product.product_name 
FROM Product
JOIN Sales ON Product.product_id = Sales.product_id
WHERE Product.product_id NOT IN (
            SELECT p.product_id 
            FROM Product p 
            JOIN Sales s ON p.product_id = s.product_id
            WHERE s.sale_date NOT BETWEEN '2019-01-01' AND '2019-03-31'  ) 