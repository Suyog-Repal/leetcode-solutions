with cte as (
    select t.*
    from Trips t
      JOIN Users c ON t.client_id = c.users_id AND c.banned = 'No'
    JOIN Users d ON t.driver_id = d.users_id AND d.banned = 'No'
)
select request_at as Day, round(sum(
      if(status like 'cancelled%', 1, 0)
)/count(*), 2) as 'Cancellation Rate'
from cte 
where request_at between '2013-10-01' and '2013-10-03'
group by request_at
order by request_at;