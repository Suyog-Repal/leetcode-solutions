with cte as (
     select s.student_id, 
     s.student_name, 
     sub.subject_name
     from Students s
     cross join Subjects sub
)
select c.student_id, c.student_name, c.subject_name, count(e.subject_name) as attended_exams
from cte c
left join Examinations e
on c.student_id = e.student_id and c.subject_name = e.subject_name
group by c.student_id, c.student_name, c.subject_name
order by c.student_id asc, c.subject_name; 