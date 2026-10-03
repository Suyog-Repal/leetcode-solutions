with cte as (
    select sale_id, product_id, sale_date, quantity, price, 
    (case when month(sale_date) in (12, 1, 2) then 'Winter' 
         when month(sale_date) in (3, 4, 5) then 'Spring'
         when month(sale_date) in (6, 7, 8) then 'Summer' 
         when month(sale_date) in (9, 10, 11) then 'Fall' 
         end) as season 
         from sales
 ), 
 cte2 as (
    select c1.season, c2.category, c1.quantity, c1.quantity*c1.price as revenue
    from cte c1 
    join products c2 
    on c1.product_id = c2.product_id 
 )
, cte3 as (
    select season, category, sum(quantity) as total_quantity, sum(revenue) as total_revenue, dense_rank() over (partition by season order by sum(quantity) desc, sum(revenue) desc, category asc) as category_rank 
 from cte2 
 group by season, category
)
select season, category, total_quantity, total_revenue
 from cte3
where category_rank = 1
order by season asc; 
