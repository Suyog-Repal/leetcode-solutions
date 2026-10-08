with cte as (
    select e.employee_id, e.name, p.review_date, p.rating, 
    row_number() over (partition by employee_id order by review_date desc) as rn 
    from employees e 
    left join performance_reviews p 
    on e.employee_id = p.employee_id
), 
last_three as (
    select *, 
    lag(rating) over (partition by employee_id order by review_date) as previous_rating 
    from cte 
    where rn <= 3
)
select employee_id, name, max(rating)-min(rating) as improvement_score 
from last_three 
group by employee_id 
having count(rating) = 3 and sum(
    case when previous_rating is null or rating > previous_rating then 1 else 0 end
) = 3 
order by improvement_score desc, name asc; 