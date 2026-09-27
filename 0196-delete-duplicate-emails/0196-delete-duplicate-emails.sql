with cte as (
    select id, email, row_number() over (partition by email order by id asc) as rnk
    from Person 
)
delete from Person
where id in (
    select id 
    from cte
    where rnk > 1
);