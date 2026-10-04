# Write your MySQL query statement below
select id , 
case when p_id is null then "Root"
    when NOT EXISTs (SELECT 1 FROM Tree t2 where t2.p_id = Tree.id)  then "Leaf"
    else "Inner" END
 as type  
from Tree