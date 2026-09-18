with cte as(
    select  requester_id from RequestAccepted
    union all
    select accepter_id as requester_id
    from RequestAccepted
)
select requester_id as id, count(*) as num
from cte
group by requester_id
order by num desc
limit 1; 