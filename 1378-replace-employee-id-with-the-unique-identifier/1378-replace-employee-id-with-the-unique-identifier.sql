select nullif(unique_id, 0) as unique_id, name 
from Employees e1 
left join EmployeeUNI e2
on e1.id = e2.id 
order by name asc; 