# Write your MySQL query statement below
SELECT category , COUNT(a.account_id) as accounts_count 
FROM (
    SELECT "Low Salary" as category 
    UNION ALL 
    SELECT "Average Salary" as category
    UNION ALL 
    SELECT "High Salary" as category
) as c
LEFT JOIN Accounts a 
ON (CASE WHEN income < 20000 THEN "Low Salary" 
        WHEN income <= 50000 THEN "Average Salary" ELSE "High Salary" END ) = category
GROUP BY category