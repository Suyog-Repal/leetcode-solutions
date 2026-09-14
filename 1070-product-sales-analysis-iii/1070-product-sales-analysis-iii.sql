with cte as (
    select distinct product_id, min(year) over (partition by product_id) as first_year
    from Sales
)
select s.product_id, 
c.first_year, s.quantity, s.price
from Sales s
join cte c
on s.product_id = c.product_id and s.year = c.first_year;