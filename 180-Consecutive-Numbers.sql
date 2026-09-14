# Write your MySQL query statement below
with checkec_nums AS (
    SELECT num , lead(num,1) OVER (ORDER BY id) as prev , lag(num,1) OVER (ORDER BY id) as next
    from logs
)
SELECT DISTINCT num as ConsecutiveNums  from checkec_nums
WHERE num = prev and num = next