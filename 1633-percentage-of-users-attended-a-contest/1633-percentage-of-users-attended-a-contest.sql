select contest_id, round(count(r.user_id)*100/(select count(*) from Users), 2) as percentage
from Users u
left join Register r
on u.user_id = r.user_id
where r.contest_id is not null
group by contest_id
order by percentage desc, contest_id asc;