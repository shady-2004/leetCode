# Write your MySQL query statement below
DELETE FROM Person p1
WHERE p1.id NOT IN ( SELECT id FROM   (SELECT min(p.id) as id  FROM Person p
                    GROUP BY p.email )  AS t )