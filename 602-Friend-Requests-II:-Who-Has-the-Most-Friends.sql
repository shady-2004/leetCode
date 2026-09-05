# Write your MySQL query statement below 
SELECT id , SUM(num) as num FROM (
SELECT accepter_id  as id , COUNT(*) AS num 
FROM RequestAccepted 
GROUP BY id
UNION ALL 
SELECT requester_id   as id , COUNT(*) AS num 
FROM RequestAccepted 
GROUP BY id 
) as friends
GROUP BY id
ORDER BY num DESC
LIMIT 1
