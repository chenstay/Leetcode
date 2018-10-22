SELECT Department.Name as Department,
Employee.Name AS Employee,
Salary
FROM Employee JOIN Department 
ON Employee.DepartmentId=Department.Id
WHERE   (Employee.DepartmentId, Employee.Salary) IN 
        (
        SELECT DepartmentId, MAX(Salary) AS Salary
        FROM Employee
        GROUP BY DepartmentId
        )
