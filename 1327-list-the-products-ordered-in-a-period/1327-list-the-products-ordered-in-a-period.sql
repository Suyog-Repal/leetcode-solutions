with cte as (
    select p.product_name,  sum(unit) as unit
    from Products p
    left join Orders o
    on p.product_id = o.product_id
    where year(o.order_date) = 2020 and month(o.order_date) = 2
    group by p.product_id
    having sum(unit) >= 100
)
select * from cte; 