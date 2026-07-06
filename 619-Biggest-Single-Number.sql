# Write your MySQL query statement below
SELECT max(num) as num
FROM (
    SELECT num 
    FROM MyNumbers
    GROUP BY num 
    HAVING COUNT(*) = 1 ) as t
