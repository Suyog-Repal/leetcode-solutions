with cte as (
  select requester_id as c1
    from RequestAccepted

union all 
select accepter_id as c1
from RequestAccepted 
)
   select c1 as id, count(c1) as num
from cte 
group by c1
order by num desc
limit 1;






    