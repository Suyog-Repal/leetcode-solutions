with cte as (
    select m.movie_id, m.title, u.user_id, u.name, rating, created_at
    from Movies m
    left join MovieRating mm
    on m.movie_id = mm.movie_id
    left join Users u
    on u.user_id = mm.user_id
),
cte2 as(
    select  name as results
from cte
group by user_id
order by count(rating) desc, name
limit 1
)
select * from cte2
union all
select title as results
from (select title, avg(rating) as avg_rating
from cte
where month(created_at) = 2 and year(created_at) = 2020
group by movie_id
order by avg_rating desc, title asc
limit 1
) as new_table;

