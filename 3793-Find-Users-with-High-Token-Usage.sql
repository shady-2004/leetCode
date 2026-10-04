# Write your MySQL query statement below
SELECT distinct s.user_id , s.prompt_count , s.avg_tokens
from prompts p 
JOIN
(select user_id  , count(*) as prompt_count , round(AVG(tokens),2) as avg_tokens 
FROM prompts
group by user_id
having count(*) >= 3 ) as s 
on p.user_id = s.user_id 
where p.tokens > s.avg_tokens
order by s.avg_tokens DESC