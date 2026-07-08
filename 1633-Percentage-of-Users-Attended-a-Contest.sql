# Write your MySQL query statement below
SELECT c.contest_id ,
ROUND( ( (COUNT(c.user_id)/(SELECT COUNT(*) FROM users))*100 ) ,2) as percentage 
FROM Register c
GROUP BY c.contest_id
ORDER BY percentage DESC ,  c.contest_id