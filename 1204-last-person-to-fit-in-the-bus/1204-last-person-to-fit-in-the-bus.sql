with cte as (
    select Turn, person_id as ID, person_name, weight, 
    sum(Weight) over (order by turn asc) as Total_Weight
    from Queue
    order by Turn
)
select person_name
from cte
where Total_Weight  <= 1000
order by Total_Weight desc
limit 1;