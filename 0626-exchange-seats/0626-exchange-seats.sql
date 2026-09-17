with cte1 as(
    select id, case when id%2 = 1 then id+1 else id-1 end as new_id, student
    from Seat
),
 cte as(
    select  row_number() over (order by new_id asc) as rnk,  student
from cte1
)
select  rnk as id, student
 from cte; 