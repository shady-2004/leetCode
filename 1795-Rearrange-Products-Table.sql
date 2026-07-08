# Write your MySQL query statement below
SELECT t.product_id , t.store , t.price 
FROM (
    SELECT product_id , 'store1' as store ,store1 as price
    FROM Products

    UNION ALL

    SELECT product_id , 'store2' as store ,store2 as price
    FROM Products

    UNION ALL

    SELECT product_id , 'store3' as store ,store3 as price
    FROM Products
) as t
WHERE t.price IS NOT NULL
ORDER BY t.price