# Write your MySQL query statement below
select e.employee_id, e.name, COUNT(emp.employee_id) as reports_count, ROUND(AVG(emp.age)) as average_age
from employees emp join employees e
on emp.reports_to = e.employee_id
group by employee_id
order by employee_id