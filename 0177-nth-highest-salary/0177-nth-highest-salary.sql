create function getNthHighestSalary(N int) RETURNS INT
BEGIN 
SET N = N-1;
RETURN (
   WITH cte AS (
     SELECT  distinct salary
     from Employee
     order by salary desc
     limit 1 offset N
   )
   select salary from cte
);
END