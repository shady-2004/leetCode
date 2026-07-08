# Write your MySQL query statement below
SELECT user_id , email
FROM Users
WHERE REGEXP_LIKE(email,'^[A-Za-z0-9_]*@[A-Za-z]+[.]com$','c')
ORDER BY user_id