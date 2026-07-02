#first table will be consecative of people>=100 
with cte1 as(
   select id, visit_date, people,
    id - row_number() over (order by id asc) grp1
    from Stadium
    where people >=100
),
cte2 as (
    select id, visit_date, people, count(*) over (partition by grp1) as grp2
    from cte1
)
select id, visit_date, people
from cte2
where grp2 >=3
order by visit_date;

   