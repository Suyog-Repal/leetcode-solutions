with cte as (
    select  user_id, category
    from ProductInfo p
    inner join ProductPurchases r
    on p.product_id = r.product_id 
    
)
select c1.category as category1, c2.category as category2, count(distinct c1.user_id) as customer_count
from cte c1
inner join cte c2
on c1.user_id = c2.user_id and c1.category < c2.category 
group by c1.category, c2.category
having count(distinct c1.user_id) >=3
order by customer_count desc, c1.category, c2.category; 

