with cte as(
    select distinct  visited_on, date_add( visited_on, interval 6 day) as new_date
    from Customer
)
select a.new_date as visited_on,  sum(b.amount) as amount, round(sum(b.amount)/7, 2) as average_amount
from cte a
join Customer b
on b.visited_on between a.visited_on and a.new_date
where a.new_date in (
    select visited_on 
    from Customer
)
group by a.visited_on, a.new_date
order by visited_on;