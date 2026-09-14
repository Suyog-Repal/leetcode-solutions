with cte as (
    
select customer_id, count( distinct product_key) as cnt
from Customer
group by customer_id
having cnt = (
    select count(*) from Product
)

)
select customer_id
from cte; 