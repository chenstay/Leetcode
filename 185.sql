select dept.Name as Department, emp.Name as Employee, emp.Salary as Salary
from Department dept, Employee emp
where emp.DepartmentId = dept.Id
and
(Select count(distinct Salary) From Employee where DepartmentId=dept.Id and Salary>emp.Salary)<3
order by Salary
