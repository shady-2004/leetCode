# Write your MySQL query statement below
SELECT u.user_id  ,u.trial_avg_duration , u2.paid_avg_duration

FROM  (SELECT u.user_id , round(sum(activity_duration)/count(*),2)  as trial_avg_duration  , MAX(u.activity_date ) as max_activity_date 
FROM  UserActivity u
WHERE activity_type  = 'free_trial'
GROUP BY user_id 
 ) as u 

JOIN (SELECT user_id , round(sum(activity_duration)/count(*),2) as paid_avg_duration  , MIN(activity_date ) as min_activity_date 
FROM  UserActivity
WHERE activity_type  = 'paid'
GROUP BY user_id 
) as u2 on u.user_id = u2.user_id

WHERE u.max_activity_date < u2.min_activity_date



