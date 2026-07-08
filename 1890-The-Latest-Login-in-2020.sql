# Write your MySQL query statement below
SELECT u.user_id , MAX(u.time_stamp) as last_stamp
FROM Logins u
WHERE YEAR(time_stamp) = 2020
GROUP BY user_id

