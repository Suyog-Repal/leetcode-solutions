select round(count(case when datediff(customer_pref_delivery_date, order_date) = 0 then 1 end)*100/count(customer_id), 2) as immediate_percentage
from Delivery
where (customer_id, order_date) in (
     select customer_id, min(order_date)
     from Delivery
     group by customer_id
);