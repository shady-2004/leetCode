# Write your MySQL query statement below
SELECT u.name , coalesce(SUM(r.distance),0) AS travelled_distance 
FROM Users u
lEFT JOIN Rides r ON r.user_id  = u.id
GROUP BY u.id 
ORDER BY travelled_distance DESC , u.name ASC