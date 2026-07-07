# Write your MySQL query statement below
SELECT id , sum(CASE WHEN month = 'Jan' THEN revenue ELSE NULL END ) as Jan_Revenue,
            sum(CASE WHEN month = 'Feb' THEN revenue ELSE NULL END ) as Feb_Revenue,
            sum(CASE WHEN month = 'Mar' THEN revenue ELSE NULL END ) as Mar_Revenue,
            sum(CASE WHEN month = 'Apr' THEN revenue ELSE NULL END ) as Apr_Revenue,
            sum(CASE WHEN month = 'May' THEN revenue ELSE NULL END ) as May_Revenue,
            sum(CASE WHEN month = 'Jun' THEN revenue ELSE NULL END ) as Jun_Revenue,
            sum(CASE WHEN month = 'Jul' THEN revenue ELSE NULL END ) as Jul_Revenue,
            sum(CASE WHEN month = 'Aug' THEN revenue ELSE NULL END ) as Aug_Revenue,
            sum(CASE WHEN month = 'Sep' THEN revenue ELSE NULL END ) as Sep_Revenue,
            sum(CASE WHEN month = 'Oct' THEN revenue ELSE NULL END ) as Oct_Revenue,
            sum(CASE WHEN month = 'Nov' THEN revenue ELSE NULL END ) as Nov_Revenue,
            sum(CASE WHEN month = 'Dec' THEN revenue ELSE NULL END ) as Dec_Revenue
FROM Department
GROUP BY id