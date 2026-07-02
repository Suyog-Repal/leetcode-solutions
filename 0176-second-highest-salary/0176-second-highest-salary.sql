SELECT (select distinct salary  
from Employee 
where salary < (SELECT MAX(salary) from Employee)
order by salary  desc
limit 1) as SecondHighestSalary