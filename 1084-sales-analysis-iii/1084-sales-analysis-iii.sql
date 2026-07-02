select s.product_id as product_id, p.product_name as product_name
from Product p
left join Sales s
on p.product_id = s.product_id
group by s.product_id
Having min(sale_date) >= '2019-01-01'  and max(sale_date) <= '2019-03-31'

 