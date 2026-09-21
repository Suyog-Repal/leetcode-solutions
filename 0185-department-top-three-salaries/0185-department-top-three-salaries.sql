with cte as (
    select e.id, e.name, salary, d.name as department_name
    from Employee e
    left join Department d
    on e.departmentId = d.id
)
select Department, Employee, Salary
from (
    select department_name as Department, name as Employee, salary as Salary, dense_rank() over (partition by department_name order by salary desc) as rnk
 from cte
) as new_table
where rnk <= 3
order by Department asc; 