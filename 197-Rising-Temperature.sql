# Write your MySQL query statement below
SELECT id FROM Weather w
WHERE EXISTS( SELECT * FROM Weather w2  WHERE
 w2.recordDate + INTERVAL 1 DAY = w.recordDate
  AND 
w.temperature > w2.temperature  )