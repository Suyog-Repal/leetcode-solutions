with cte as(
    select p.product_id, p.start_date, p.end_date, p.price, u.purchase_date, u.units
    from Prices p
    left join UnitsSold u
    on p.product_id = u.product_id and purchase_date between start_date and end_date
)

select product_id, round(ifnull(sum(price*units)/(sum(units)), 0), 2) as average_price
from cte
group by product_id;
