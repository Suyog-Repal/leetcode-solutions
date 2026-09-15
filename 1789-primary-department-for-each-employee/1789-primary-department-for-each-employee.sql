select employee_id, 
 (case when count(employee_id) = 1 then max(department_id)
      when count(employee_id) > 1 then max( case when primary_flag = 'Y' then department_id end) 
      end ) as department_id
from Employee
group by employee_id;